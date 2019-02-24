#pragma once
#include "UIView.h"
#include "../ImGUI/imgui.h"

namespace ed
{
	class PreviewUI : public UIView
	{
	public:
		PreviewUI(GUIManager* ui, ed::InterfaceManager* objects, const std::string& name = "", bool visible = true) :
			UIView(ui, objects, name, visible),
			m_pick(nullptr),
			m_pickMode(0) {
		}

		virtual void OnEvent(const ml::Event& e);
		virtual void Update(float delta);

	private:
		ImVec2 m_mouseContact;

		PipelineItem* m_pick;
		int m_pickMode; // 0 = position, 1 = scale, 2 = rotation
	};
}