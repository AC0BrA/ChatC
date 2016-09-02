#ifdef WIN32 /* si vous êtes sous Windows */

#include <winsock2.h>

#elif defined (linux) /* si vous êtes sous Linux */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h> /* close */
#include <netdb.h> /* gethostbyname */
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define closesocket(s) close(s)
#else /* sinon vous êtes sur une plateforme non supportée */

#error not defined for this platform

#endif
int		main(int argc, char **argv)
{
	init();
	end();
	return (0);
}


//ce code appartient a une petite chatte en manque de zizi
//merci de ne pas copier
//biz