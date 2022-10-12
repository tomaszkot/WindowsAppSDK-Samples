#include "pch.h"
//#include "IslandApplication.h"
//#include "IslandApplication.g.cpp"
//#include <windows.ui.xaml.hosting.desktopwindowxamlsource.h>
//
//namespace winrt::XamlIslandTest3::implementation
//{
//	IslandApplication::IslandApplication(winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider> const& providers)
//	{
//		for (auto provider : providers)
//		{
//			m_providers.Append(provider);
//		}
//
//		Initialize();
//    //winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource _desktopWindowXamlSource{ nullptr };
//    winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource _desktopWindowXamlSource{ nullptr };
//	}
//	IslandApplication::~IslandApplication()
//	{
//		Close();
//	}
//	winrt::Windows::Foundation::IClosable IslandApplication::WindowsXamlManager() const
//	{
//		return m_xamlmanager;
//	}
//	bool IslandApplication::IsDisposed() const
//	{
//		return m_isclosed;
//	}
//	void IslandApplication::Initialize()
//	{
//		//Initialise the outer object, we grab the metadata provider from it if it exists.
//		const auto out = outer();
//		if constexpr(out)
//		{
//			winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider provider{};
//			winrt::check_hresult(out->QueryInterface(winrt::guid_of<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>(), winrt::put_abi(provider)));
//			m_providers.Append(provider);
//    }
//
//		//Initialises the WindowsXamlManager.
//		m_xamlmanager = winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread();
//    
//	}
//	winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider> IslandApplication::MetadataProviders()
//	{
//		return m_providers;
//	}
//	void IslandApplication::Close()
//	{
//		if (m_isclosed)
//		{
//			return;
//		}
//
//		m_isclosed = true;
//
//		m_xamlmanager.Close();
//		m_providers.Clear();
//		m_xamlmanager = nullptr;
//		Exit();
//	}
//
//	//Implementation for the IXamlMetadataProvider interface.
//	//This basically just passes all requests through to the contained providers.
//	winrt::Microsoft::UI::Xaml::Markup::IXamlType IslandApplication::GetXamlType(winrt::Windows::UI::Xaml::Interop::TypeName const &type)
//	{
//		for (const auto &provider : m_providers)
//		{
//			const auto result = provider.GetXamlType(type);
//			if (result)
//			{
//				return result;
//			}
//		}
//
//		return nullptr;
//	}
//	winrt::Microsoft::UI::Xaml::Markup::IXamlType IslandApplication::GetXamlType(winrt::hstring const &fullname)
//	{
//		for (const auto &provider : m_providers)
//		{
//			const auto result = provider.GetXamlType(fullname);
//			if (result)
//			{
//				return result;
//			}
//		}
//
//		return nullptr;
//	}
//	winrt::com_array<winrt::Microsoft::UI::Xaml::Markup::XmlnsDefinition> IslandApplication::GetXmlnsDefinitions()
//	{
//		std::vector<winrt::Microsoft::UI::Xaml::Markup::XmlnsDefinition> definitions;
//
//		for (const auto &provider : m_providers)
//		{
//			auto defs = provider.GetXmlnsDefinitions();
//			for (const auto &def : defs)
//			{
//				definitions.push_back(def);
//			}
//		}
//
//		return winrt::com_array<winrt::Microsoft::UI::Xaml::Markup::XmlnsDefinition>(definitions.begin(), definitions.end());
//	}
//}
