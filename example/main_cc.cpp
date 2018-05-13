#include <vulkan/vulkan.hpp>
#include <GLFW/glfw3.h>
#include <glm/gtx/hash.hpp>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <fmt/printf.h>

int main() {
	vk::ImageCreateInfo ci({}, vk::ImageType::e2D, vk::Format::eR8G8B8A8Unorm,
		{ 100, 100, 1 },
		1, 1, vk::SampleCountFlagBits::e1,
		vk::ImageTiling::eOptimal, vk::ImageUsageFlagBits::eColorAttachment,
		vk::SharingMode::eExclusive, 0, 0, vk::ImageLayout::eColorAttachmentOptimal);

	vk::ImageUsageFlags iu4 = vk::ImageUsageFlagBits::eColorAttachment | vk::ImageUsageFlagBits::eStorage;
}