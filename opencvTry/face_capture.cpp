#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv) 
{

	VideoCapture cap;
	if (argc >1)
	{
		cap.open(argv[1]);
	}
	else
	{
		cap.open(0);		      // Opens default camera
	}
	namedWindow("web cam", WINDOW_NORMAL);

	Mat frame, segm;                // Opens Mat
	for (;;) 
	{
		cap >> frame;      	    // Grab frame
		frame.copyTo(segm);		// IMPOTANT
		imshow("web cam", segm); // Show video
		
		int c = waitKey(30);	// pause key
		if (c == 'q' || c == 'Q' || (c & 255) == 27)                                                  
			break;
	}
	return 0;
}