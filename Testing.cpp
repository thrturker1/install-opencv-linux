#include<opencv2/opencv.hpp>
#include<stdio.h>
using namespace cv;
int main(int argc,char** argv){
//there is no arg state
if(argc != 2){
printf("usage: Test.out <Image_Path>\n");
return -1;
}
//Mat object named image
Mat image;
//imread = media reader for images
image=imread(argv[1],1);
// if image value is blink or it's not an image(null)
if(!image.data){
printf("No image data \n");
return -1;
}
// create a frame, canvas etc.
namedWindow("Display Image",WINDOW_AUTOSIZE);
// showing image
imshow("Display Image",image);
// showing image forever
waitKey(0);
return 0;
}

