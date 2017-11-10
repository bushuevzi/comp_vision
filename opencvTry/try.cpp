#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;


int main(int argc, char** argv)
{
	string imageName("lena.jpg");

	if (argc > 1)
	{
		imageName = argv[1];
	}
	Mat img = imread(imageName.c_str(), IMREAD_COLOR); // Read the file
	namedWindow("image", WINDOW_NORMAL); //Create a window for display
	imshow("image", img); // show our image inside it
	waitKey(0); // wait for a keystroke in the window
	return 0;
}