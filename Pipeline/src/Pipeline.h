#pragma once

#include "Shader2D.h"
#include "FrameBuffer.h"
#include "Matrix.h"

namespace pipeline {
	/// @brief ������
	class Pipeline
	{
	public:
		Pipeline();
		Pipeline(int width, int height);
		~Pipeline();

		/// @brief ��ʼ��
		void Initialize();

		/// @brief ���������
		/// @param color 
		/// @param depth �Ƿ�����
		void clearBuffer(const Math::Vector4D& color, bool depth = false);

		void setVertexBuffer(const std::vector<Vertex>& vertices);
		void setIndexBuffer(const std::vector<unsigned int>& indices);

		void setShaderMode(ShaderMode mode = ShaderMode::Simple);
		void drawIndex(RenderMode mode = RenderMode::Fill);
		void swapBuffer();

		Fragment lerp(const Fragment& n1, const Fragment& n2, float width);

		unsigned char* output() { return m_pFrontBuffer->getColorBuffer(); }

	protected:
		/// @brief bresenhamֱ�߹�դ��
		/// @param from 
		/// @param to 
		void bresenham(const Fragment& from, const Fragment& to);

		/// @brief 
		/// @param left 
		/// @param right 
		void scanLinePerRow(const Fragment& left, const Fragment& right);

		void rasterTopTriangle(const Fragment& v1, const Fragment& v2, const Fragment& v3);

		void rasterBottomTriangle(const Fragment& v1, const Fragment& v2, const Fragment& v3);

		void edgeWalkingFillRasterization(const Fragment& v1, const Fragment& v2, const Fragment& v3);

	private:
		int m_width;
		int m_height;
		Shader* m_pShader;
		FrameBuffer* m_pFrontBuffer;			//��һ֡��Ⱦ����
		FrameBuffer* m_pBackBuffer;				//��һ֡��Ⱦ����
		std::vector<Vertex> m_vertices;			//�����������
		std::vector<unsigned int> m_indices;	//�����������
		Math::Matrix4f m_viewPortMatrix;		//�ӿھ���
	};
}


