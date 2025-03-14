#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int shut_down () {
        char* cmd[] = {"/sbin/shutdown", "-h", "now", NULL};
        execvp(cmd[0], cmd);
        exit(1);
}
int message () {
        system("zenity --info --text='Will shutdown after 30 seconds after clicking OK'");
        sleep(30);
        return 0;
}
        
int check_time (int from, int to, int time_hour) {
        if (time_hour >= from && time_hour <= to) {
                message();
                shut_down();
        }
        return 0;
}

int main () {
        while (1) {
                time_t now = time(NULL);
                struct tm *myLocalTime = localtime(&now);
                int cur_hour = myLocalTime -> tm_hour;

                check_time(0, 3, cur_hour);
                sleep(60);
        }

        return 0;
}
