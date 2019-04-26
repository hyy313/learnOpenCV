#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
	VideoCapture capture("test.mp4");//Capture初始化直接读入视频

	//死循环，循环按帧播放图片，就形成了视频
	while (1) {
		Mat frame;//图片帧
		capture >> frame;//从视频中按帧赋给图片帧

		//死循环退出条件，播放完毕时，图片帧为空，退出
		if (frame.empty()) {
			cout << "播放结束" << endl;
			waitKey(0);
			return 0;
		}

		//每30ms播放一张图片
		imshow("viedoName", frame);
		waitKey(30);
	}

}