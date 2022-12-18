#pragma once
#pragma warning(disable:26451)

#include <iostream>
#include <vector>
#include "Vector.h"

namespace PipeLine {

	using namespace Math;

	//֡����
	class FrameBuffer
	{
	public:
		FrameBuffer();
		FrameBuffer(const int nWidth, const int nHeight);
		~FrameBuffer();

		int getWidth() const { return m_nWidth; }
		int getHeight() const { return m_nHeight; }
		unsigned char* getColorBuffer() { return m_colorBuffer.data(); }

		//��ɫ�����ʼ��
		void Initialization(const Vector4D& color);

		//��������
		bool drawPixel(unsigned int x, unsigned int y, const Vector4D& color);

	private:
		int m_nWidth;
		int m_nHeight;
		std::vector<unsigned char> m_colorBuffer;
	};
}


