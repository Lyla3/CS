#include <stdio.h>
#include <unistd.h>

 int main()
{
    printf("my pid is %d\n", getpid());

    //자식 프로세스 생성
    if (fork() == 0) {
        printf("child pid is %d\n", getpid());
    }
    printf("executed!\n");
    return 0;
}
