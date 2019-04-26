//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <string>
//using namespace std;
//using namespace cv;
//
//int main()
//
//{
//	string imgName = "bupt.jpg";
//
//	//读取本地的一张图片便显示出来
//	Mat img1 = imread("bupt.jpg");
//	Mat img2 = imread(imgName, IMREAD_UNCHANGED);
//	Mat img3 = imread(imgName, IMREAD_GRAYSCALE);
//	Mat img4 = imread(imgName, IMREAD_COLOR);
//
//	namedWindow("Display1");
//	namedWindow("Display2", WINDOW_AUTOSIZE);
//	namedWindow("Display3", WINDOW_AUTOSIZE);
//	namedWindow("Display4", WINDOW_AUTOSIZE);
//
//
//	imshow("Display1", img1);
//	imshow("Display2", img2);
//	imshow("Display3", img3);
//	imshow("Display4", img4);
//
//	//等待用户按键
//	waitKey(0);
//	return 0;
//}