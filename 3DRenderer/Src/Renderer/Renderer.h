#pragma once
#include "Renderer/RendererCommand.h"

class Renderer
{
private:
	static RendererAPI::API s_RendererAPI; 

public:
	Renderer();
	virtual ~Renderer();

	static void BeginScene(); // TODO take in params
	static void EndScene();

	static void Submit(const std::shared_ptr<VertexArray>& vertexArray);

	static inline RendererAPI::API GetRendererAPI() { return s_RendererAPI; }
};

