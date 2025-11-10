#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void shut_down(void)
{
        system("shutdown -h now");
}
int message()
{
        // Install Zenity
        if (system("zenity --info --text='It's time to shudown the system'") != 0)
                return -1;
        return 0;
}
        
void check_time(int from, int to, int time_hour)
{
        if (time_hour >= from && time_hour <= to)
        {
                message();
                shut_down();
        }
}

int main(void)
{
        int cur_hour = 0;

        while (1)
        {
                time_t now = time(NULL);
                struct tm *myLocalTime = localtime(&now);

                cur_hour = myLocalTime -> tm_hour;

                check_time(0, 3, cur_hour);
                sleep(60);
        }
        return 0;
}
