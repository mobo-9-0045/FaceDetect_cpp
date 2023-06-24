#include <opencv2/opencv.hpp>
#include <iostream>

int	main()
{
	cv::VideoCapture cap(0);
	cv::Mat img;
	if (cap.isOpened() == true)
	{
		while (1)
		{
			cap.read(img);
			if (img.empty() == true)
				break;
			cv::imshow("Test", img);
			cv::waitKey(2);
		}
	}
	else
	{
		std::cout << "Error opening video stream" << std::endl;
		exit (1);
	}
	return (0);
}
