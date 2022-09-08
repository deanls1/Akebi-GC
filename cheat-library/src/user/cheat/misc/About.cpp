#include "pch-il2cpp.h"
#include "About.h"

#include <helpers.h>
#include <cheat/game/EntityManager.h>

namespace cheat::feature 
{
    const FeatureGUIInfo& About::GetGUIInfo() const
    {
        static const FeatureGUIInfo info{ "", u8"关于", false };
        return info;
    }

    void About::DrawMain()
    {
        ImGui::TextColored(ImColor(28, 202, 214, 255), "Akebi github:");
        TextURL("Github link", "https://github.com/Akebi-Group/Akebi-GC", true, false);

		ImGui::TextColored(ImColor(28, 202, 214, 255), "Akebi discord:");
		TextURL("Discord invite link", "https://discord.com/invite/MmV8hNZB9S", true, false);

        ImGui::Text(u8"中文汉化:");
        ImGui::SameLine();
        ImGui::TextColored(ImColor(0, 102, 255, 255), u8"由gktwo,dongfang完成，我99.9%完全复制，仅为自用，");

        ImGui::Text("Founder:");
        ImGui::SameLine();
        ImGui::TextColored(ImColor(0, 102, 255, 255), "Callow");
        
		ImGui::Text(u8"主要开发者:");
		ImGui::SameLine();
		ImGui::TextColored(ImColor(0, 102, 255, 255), "Taiga");

		ImGui::Text(u8"主要贡献者:");
		ImGui::TextColored(ImColor(0, 102, 255, 255), "WitchGod, m0nkrel, Shichiha, harlanx, andiabrudan, hellomykami");

		ImGui::Text(u8"全部贡献者名单:");
		TextURL("Github link", "https://github.com/Akebi-Group/Akebi-GC/graphs/contributors", true, false);
    }

    About& About::GetInstance()
    {
        static About instance;
        return instance;
    }
}