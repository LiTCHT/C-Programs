#include <stdio.h>
#include <string.h>
#include <fcntl.h> 
#include <errno.h> 
#include <termios.h>
#include <unistd.h> 

int main() {
       	
  char data[20];
  int fd;
  fd = open("/dev/ttyUSB0", O_RDWR );
	if(fd == -1)
	{
		printf("unable to create file");
	}
	else
	{
		printf("file created successfully");
	}



  struct termios ary;

  tcgetattr(fd,&ary);

  ary.c_iflag &= ~(IXON | IXOFF | IXANY);
  ary.c_oflag &= ~OPOST;
  ary.c_lflag &= ~(ICANON |ECHO | ECHOE | ECHONL  | ISIG ); 
  ary.c_cflag &= ~(CSIZE | PARENB);
  ary.c_cflag &= ~CRTSCTS;
  ary.c_cflag |= CS8;
  ary.c_cflag |= (CREAD | CLOCAL);
  ary.c_cflag |= B9600;
  ary.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL); 
  ary.c_cc[VMIN] = 0;
  ary.c_cc[VTIME] = 0;
  ary.c_cflag &= ~CSTOPB;
  tcsetattr(fd,TCSANOW, &ary);
  
  while(1){

    printf("\n Waiting for message...\n");
    sleep(3);
    read(fd,data,sizeof(data));
    if(data > 0)
    {

            for(int i=0;i<20;i++)
	        {
                 printf("%c",data[i]);
            }
     
    }
    else
    {
      printf("Data not read");
    }

    memset(data,0,sizeof(data));
    
    sleep(1);
 
   
  }
  
  close(fd);
  return 0;
}