//#include <opencv2/opencv.hpp>
//using namespace cv;
//
//int main() {
//	//读入视频
//
//	VideoCapture capture("test.mp4");
//	//VideoCapture capture(0);
//	//VideoCpture 初始化参数为0，代表调用摄像头
//	//			  参数为路径，就是调用路径视频	
//
//	//循环播放，死循环所以有问题
//	while (1) {
//		//将视频按帧赋给图片帧
//		Mat Frame;
//		capture >> Frame;
//		//加入图片帧是否为空结束循环
//		if (Frame.empty()) {
//			break;
//		}
//		//播放图片
//		imshow("jiwei", Frame);
//		//设置时间间隔为30ms
//		waitKey(30);
//	}
//
//	waitKey(0);
//
//	return 0;
//}