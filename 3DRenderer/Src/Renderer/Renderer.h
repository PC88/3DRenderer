#pragma once

enum class RendererAPI
{
	None = 0, OpenGL = 1, Direct3D = 2, Vulkan = 3
};

class Renderer
{
public:
	Renderer();
	virtual ~Renderer();

	static inline RendererAPI GetRendererAPI() { return s_RendererAPI; }

private:
	static RendererAPI s_RendererAPI;
};
