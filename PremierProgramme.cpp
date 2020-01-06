/*// OpenCV core module (matrices, etc.)
#include <opencv2\core\core.hpp>
// OpenCV highgui: user interface, windows, etc.
#include <opencv2\highgui\highgui.hpp>
// OpenCV image processing (converting to grayscale, etc.)
#include <opencv2\imgproc\imgproc.hpp>

#include <opencv2\calib3d\calib3d.hpp>

#include <aruco\aruco.h>

#include <iostream>

using namespace std;
using namespace cv;
using namespace aruco;

// the ASCCI code for the escape key
#define ESC_KEY 27
#define SP_KEY 32

// A key that we use to store the user keyboard input
char key;
// Declaring a VideoCapture object
// it can open a camera feed
// or a video file if there is a codec on the machine
VideoCapture cap;
// The current image
// retrieved from the video capture
Mat myImage;

int main(int argc, char** argv) {
	while (!cap.isOpened() && key != -1){
		cout << "Identifiant de la caméra" << endl;
		cin >> key;
		cap.open(key);
	}
	cap >> myImage;

	namedWindow("Aruco", CV_WINDOW_AUTOSIZE);
	// c rea t ion d ’un de tec teu r de marqueurs
	aruco::MarkerDetector myDetector;
	// l i s t e de marqueurs : sera remplie par ArUco
	vector <Marker> markers;
	// de tec t i on
		imshow("Aruco",myImage);
	key = waitKey(1);
	while (key != ESC_KEY){
		cap >> myImage;
		myDetector.detect(myImage, markers);
		// on a f f i c h e l e r e s u l t a t de la de tec t i on sur une image
		for (unsigned int i=0; i<markers.size(); i++) {
			cout << markers[i];
			markers[i].draw(myImage, Scalar(0, 0, 255), 2);
		}
		imshow("Aruco",myImage);
		key = waitKey(1);
	}
	// Destroying the windows
	destroyWindow("Aruco");
	// Releasing the video capture
	cap.release();
	return EXIT_SUCCESS;
}*/