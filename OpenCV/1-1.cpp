//#include<iostream>
//#include<opencv2/opencv.hpp>
//#include<string>
//using namespace std;
//using namespace cv;
//
//int main() {
//	string srcImgName = "bupt.jpg";
//	//bupt.jpg��ͼƬ·�������Զ��룬Ҳ�����ʼ��ֵ��
//	//Ϊ�˷��㣬û�д�main������argv��ȡ��
//	//main�������Դ�����������
//	//argc:int�ͣ���¼�������
//	//argv��vector���洢����	
//	string dstImgName = "bupt_dst.jpg";//�洢ͼƬ·��
//
//	Mat srcImage;//Mat�Ǹ��������ݽṹ�����ڴ洢����ͼƬ��
//	srcImage = imread(srcImgName, IMREAD_UNCHANGED);
//	//����ͼƬ������������
//	//srcImgName��ͼƬ·��
//	//�ڶ���������Ҫ���֣�
//	//IMREAD_UNCHANGED:
//	//IMREAD_GRAYSCALE:
//	//IMREAD_COLOR:
//
//	imshow("windowName", srcImage);
//	//windowName�Ǵ�������Ĭ��������Ӧģʽ��ʾ������ͼƬ��С��ʾ��
//	//�����Լ����崰�ڣ��޸���ʾ����ģʽ
//
//	Mat dstImage;//���ڴ洢����ͼƬ
//
//	//��ԭͼ���Ҷȴ���
//	cvtColor(srcImage, dstImage, COLOR_BGR2GRAY);
//	//cvtcolor������������
//	//srcImage��ԭͼ
//	//dstImage���޸ĺ��ͼ
//	//��ɫ�޸ķ�ʽ
//
//	imwrite(dstImgName, dstImage);
//	imshow("dst", dstImage);
//
//	waitKey(0);
//	//�ȴ���������ʱ��
//	//0������һֱ�ȴ����а���
//	//n������ȴ�n ms���ߵȴ�������
//
//	return 0;
//}