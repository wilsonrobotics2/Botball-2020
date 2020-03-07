#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");   
    enable_servos();
    set_servo_position(0,150);
    set_servo_position(2,1070);
    set_servo_position(3,1100);
    motor(0,100);
    msleep(680);
    motor(1,100);
    motor(0,100);
    msleep(3000);
    motor(1,-100);    
    motor(0,-100);
    msleep(2900);
    motor(1,100);
    msleep(510);
    ao();
    set_servo_position(0,260);
    set_servo_position(2,910);
    msleep(1000);
    motor(1,100);
    motor(0,100);
    msleep(2000);
    ao();
    set_servo_position(3,230);
    msleep(1000);
    motor(0,-100);
    msleep(600);
    motor(1,-50);    
    motor(0,-50);
    msleep(3000);
    motor(0,60);
    msleep(1560);
    motor(1,60);
    motor(0,60);
    msleep(2000);
    ao();
    set_servo_position(3,600);
    msleep(1000);
    disable_servos();
    return 0;
}
