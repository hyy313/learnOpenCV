#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
	VideoCapture capture("test.mp4");//Capture��ʼ��ֱ�Ӷ�����Ƶ

	//��ѭ����ѭ����֡����ͼƬ�����γ�����Ƶ
	while (1) {
		Mat frame;//ͼƬ֡
		capture >> frame;//����Ƶ�а�֡����ͼƬ֡

		//��ѭ���˳��������������ʱ��ͼƬ֡Ϊ�գ��˳�
		if (frame.empty()) {
			cout << "���Ž���" << endl;
			waitKey(0);
			return 0;
		}

		//ÿ30ms����һ��ͼƬ
		imshow("viedoName", frame);
		waitKey(30);
	}

}