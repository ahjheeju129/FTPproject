#include "doCommand.h"
int doCommand(int sock,char * ip){
	listDownload(sock,ip);
	/*printf("listDownload성공\n");
	fileDownload(sock,ip,"account.txt");
	printf("fileDownload성공\n");
	clientQuit(sock,ip);
	printf("clientQuit성공\n");
*/
	return 0;
}
