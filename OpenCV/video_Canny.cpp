//#include <opencv2/opencv.hpp>
//using namespace cv;
//
//int main() {
//	//������Ƶ
//
//	VideoCapture capture("test.mp4");
//	//VideoCapture capture(0);
//	Mat edges;
//	
//	while (1) {
//		//
//		Mat Frame;
//		capture >> Frame;
//		
//		//
//		cvtColor(Frame, edges, COLOR_BGR2GRAY);
//
//		//
//		blur(edges, edges, Size(7, 7));
//
//		//����ͼƬ
//		Canny(edges, edges, 0, 30, 3);
//		imshow("jiwei", edges);
//		//����ʱ����Ϊ30ms
//		if (waitKey(30) >= 0) {
//			break;
//		}
//	}
//
//	waitKey(0);
//
//	return 0;
//}