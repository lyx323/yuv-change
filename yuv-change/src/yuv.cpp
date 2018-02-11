#include "opencv2/opencv.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;

#define nWidth 640
#define nHeight 480
int main()
{
    FILE *f ;
    if(!(f = fopen("/home/admins/slam_dataset/yuv/1358499024978476.yuv","rb")))
    {
        std::cout << "file open error!" << std::endl;
    }

    // IplImage *image = cvCreateImage(cvSize(nWidth, nHeight),IPL_DEPTH_8U,1);  // 控制只显示灰度图像
    // unsigned char *pBuf = new unsigned char[nWidth*nHeight*3/2];
    // fread(pBuf, 1, (nWidth * nHeight * 3) / 2, f);
    //cvSetData(image, pBuf, nWidth);
    // cvNamedWindow("显示");
    // cvShowImage("显示", yuv);
    // cvWaitKey( 0 );
    // cvDestroyWindow("显示");
    //cvReleaseImage(&image);
    //cvSetData(yuv, pBuf, nWidth);

    unsigned char *pBuf = new unsigned char[nWidth*nHeight*3/2];
    fread(pBuf, 1, (nWidth * nHeight * 3) / 2, f);
    Mat yuv(480,640,CV_8UC1);
    yuv.data = pBuf;
    namedWindow("img", CV_WINDOW_AUTOSIZE);
    imshow("img",yuv);
    waitKey(0);
    cvDestroyWindow("img");
    delete []pBuf;
    fclose(f);
    return 0;
}

    // 计算帧数
    // fseek(f, 0, SEEK_END);
    // int frame_count = 0;
    // long file_size = 0;
    // frame_count = (int) ((int)ftell(f)/((nWidth * nHeight * 3) / 2));  
    // cout << "frame num is " << frame_count << endl;
    // cout << "file length is " << ftell(f) << endl;
    // fseek(f, 0, SEEK_SET);