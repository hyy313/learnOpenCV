//#include <opencv2/opencv.hpp>
//using namespace cv;
//
//int main() {
//	//������Ƶ
//
//	VideoCapture capture("test.mp4");
//	//VideoCapture capture(0);
//	//VideoCpture ��ʼ������Ϊ0�������������ͷ
//	//			  ����Ϊ·�������ǵ���·����Ƶ	
//
//	//ѭ�����ţ���ѭ������������
//	while (1) {
//		//����Ƶ��֡����ͼƬ֡
//		Mat Frame;
//		capture >> Frame;
//		//����ͼƬ֡�Ƿ�Ϊ�ս���ѭ��
//		if (Frame.empty()) {
//			break;
//		}
//		//����ͼƬ
//		imshow("jiwei", Frame);
//		//����ʱ����Ϊ30ms
//		waitKey(30);
//	}
//
//	waitKey(0);
//
//	return 0;
//}