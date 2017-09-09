#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sstream>

//#define ROSCONSOLE_MIN_SEVERITY  (ROSCONSOLE_SEVERITY_ERROR)

int main(int argc, char **argv)
{
    ros::init(argc, argv, "example_1");

    ros::NodeHandle n;

    ros::Rate loop_rate(1);

    while (ros::ok())
    {
        ROS_DEBUG("test ROS_DEBUG");
        ROS_INFO("test ROS_INFO");
        ROS_WARN("test ROS_WARN");
        ROS_ERROR("test ROS_ERROR");
        ROS_FATAL("test ROS_FATAL");

        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}