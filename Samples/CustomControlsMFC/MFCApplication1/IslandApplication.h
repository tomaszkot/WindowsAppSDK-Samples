//#pragma once
//#include "IslandApplication.g.h"
//
//namespace winrt::XamlIslandTest3::implementation
//{
//	//Application class.
//	//This must exist and implement IXamlMetadataProvider for WinUI3 resources to load.
//	struct IslandApplication : IslandApplicationT<IslandApplication, winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>
//	{
//		IslandApplication() = default;
//
//		//Used to provide metadata providers to the Application.
//		IslandApplication(winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider> const& providers);
//		~IslandApplication();
//
//		//Allows you to obtain the enclosed WindowsXamlManager.
//		//This member allows you to destroy the WindowsXamlManager independently of the Application.
//		winrt::Windows::Foundation::IClosable WindowsXamlManager() const;
//		bool IsDisposed() const;
//		void Initialize();
//		winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider> MetadataProviders();
//		void Close();
//
//		//The IXamlMetadataProvider members.
//		winrt::Microsoft::UI::Xaml::Markup::IXamlType GetXamlType(winrt::Windows::UI::Xaml::Interop::TypeName const &type);
//		winrt::Microsoft::UI::Xaml::Markup::IXamlType GetXamlType(winrt::hstring const &fullname);
//		winrt::com_array<winrt::Microsoft::UI::Xaml::Markup::XmlnsDefinition> GetXmlnsDefinitions();
//
//	private:
//
//		bool m_isclosed = false;
//		winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager m_xamlmanager = nullptr;
//		winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider> m_providers = winrt::single_threaded_vector<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>();
//	};
//}
//namespace winrt::XamlIslandTest3::factory_implementation
//{
//	struct IslandApplication : IslandApplicationT<IslandApplication, implementation::IslandApplication>
//	{
//	};
//}
