Action()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=advantageonlineshopping.com");

	web_url("advantageonlineshopping.com", 
		"URL=http://advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=https://apppulse-web-data.saas.hpe.com/static/2.50/js/instrument-all.min.js", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j67&a=647700099&t=pageview&_s=1&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1080&vp=1729x868&je=0&_u=IEBAAEAB~&jid=1189311688&gjid=932617142&cid=1727700429.1525906740&tid=UA-81334227-1&_gid=1168917812.1525906740&_r=1&z=1346850914", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1234", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1238", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1235", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1236", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1237", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		"Url=/css/images/category_banner_3.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3102", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3101", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3103", ENDITEM, 
		"Url=/css/images/category_banner_2.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2201", ENDITEM, 
		"Url=/css/images/category_banner_5.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5505", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5800", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5900", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5700", ENDITEM, 
		"Url=/css/images/category_banner_1.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1249", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1250", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1200", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j67&a=647700099&t=pageview&_s=15&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2Fcategory%2FLaptops%2F1&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1080&vp=1729x868&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1727700429.1525906740&tid=UA-81334227-1&_gid=1168917812.1525906740&z=1438179531", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=11100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1245", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1800", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=custom_image_user_3f5ac955-f0f1-4193-98d7-ebf1059ebb97", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j67&a=647700099&t=pageview&_s=16&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2Fproduct%2F9&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1080&vp=1729x868&je=0&_u=KEBAAEAB~&jid=1252256793&gjid=1257480124&cid=1727700429.1525906740&tid=UA-81334227-1&_gid=1168917812.1525906740&_r=1&z=753397604", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j67&a=647700099&t=pageview&_s=17&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1080&vp=1729x868&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1727700429.1525906740&tid=UA-81334227-1&_gid=1168917812.1525906740&z=321627422", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j67&a=647700099&t=pageview&_s=18&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2Fcategory%2FSpeakers%2F4&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1080&vp=1729x868&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1727700429.1525906740&tid=UA-81334227-1&_gid=1168917812.1525906740&z=397846855", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j67&a=647700099&t=pageview&_s=19&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2Fproduct%2F20&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1080&vp=1729x868&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1727700429.1525906740&tid=UA-81334227-1&_gid=1168917812.1525906740&z=1253288518", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j67&a=647700099&t=pageview&_s=20&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2Fcategory%2FSpeaker%2F4&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1080&vp=1729x868&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1727700429.1525906740&tid=UA-81334227-1&_gid=1168917812.1525906740&z=1261748350", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j67&a=647700099&t=pageview&_s=21&dl=http%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1080&vp=1729x868&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1727700429.1525906740&tid=UA-81334227-1&_gid=1168917812.1525906740&z=1262982537", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("s_vi=[CS]v1|2D6C8E1A050339FF-40001188C00008FC[CE]; DOMAIN=sstats.adobe.com");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=66", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s76955771292611?AQB=1&ndh=1&pf=1&t=9%2F4%2F2018%2016%3A58%3A52%203%20360&fid=397E036A5710BD62-065323F7A3CD7D82&ce=UTF-8&pageName=DCBrowserExt%3AShim%3AVersion%3AUnknown%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.6&v2=sideload&v3=prod&v4=not_set&s=1920x1080&c=24&j=1.6&v=N&k=Y&bh=8&AQE=1", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s74306843233311?AQB=1&ndh=1&pf=1&t=9%2F4%2F2018%2016%3A58%3A53%203%20360&fid=397E036A5710BD62-065323F7A3CD7D82&ce=UTF-8&pageName=DCBrowserExt%3AExtension%3AStartup%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.6&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s76685925367069?AQB=1&ndh=1&pf=1&t=9%2F4%2F2018%2016%3A58%3A53%203%20360&fid=397E036A5710BD62-065323F7A3CD7D82&ce=UTF-8&pageName=DCBrowserExt%3AOS%3Awin%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.6&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"http://advantageonlineshopping.com");

	web_custom_request("getServerTime", 
		"URL=https://apppulse-web-data.saas.hpe.com/hpclientmon/getServerTime", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("ALL", 
		"URL=http://52.38.138.5/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://advantageonlineshopping.com");

	web_url("ALL_2", 
		"URL=http://52.38.138.5/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_auto_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://52.38.138.5:8081/accountservice/GetAccountConfigurationRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest_2", 
		"URL=http://52.38.138.5:8081/accountservice/GetAccountConfigurationRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Access-Control-Request-Headers");

	web_revert_auto_header("Access-Control-Request-Method");

	web_add_auto_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_custom_request("GetAccountConfigurationRequest_3", 
		"URL=http://52.38.138.5:8081/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest_4", 
		"URL=http://52.38.138.5:8081/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("SOAPAction");

	web_url("categories", 
		"URL=http://52.38.138.5/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=http://52.38.138.5/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.2.1727700429.1525906740; DOMAIN=advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.1168917812.1525906740; DOMAIN=advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=advantageonlineshopping.com");

	web_revert_auto_header("Origin");

	web_url("popularProducts.json", 
		"URL=http://advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://advantageonlineshopping.com");

	web_url("all_data", 
		"URL=http://52.38.138.5/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(22);

	lr_start_transaction("FullProcess");

	lr_start_transaction("Speakers");

	web_url("attributes", 
		"URL=http://52.38.138.5/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("category-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("sessonly=0; DOMAIN=lastpass.com");

	web_add_cookie("lang=en_US; DOMAIN=lastpass.com");

	web_add_cookie("PHPSESSID=rnUB1r3kACxSRslJzc1Pvkhajo9; DOMAIN=lastpass.com");

	web_add_auto_header("Origin", 
		"chrome-extension://hdokiejnpimakedhajhdlcegeplioahd");

	web_submit_data("login_check.php", 
		"Action=https://lastpass.com/login_check.php", 
		"Method=POST", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sentms", "Value=1525906733181", ENDITEM, 
		"Name=canexpire", "Value=1", ENDITEM, 
		"Name=cansetuuid", "Value=1", ENDITEM, 
		"Name=method", "Value=cr", ENDITEM, 
		"Name=version", "Value=4.9.1", ENDITEM, 
		"Name=sessonly", "Value=0", ENDITEM, 
		"Name=requesthash", "Value=crunknown1", ENDITEM, 
		"Name=requestsrc", "Value=cr", ENDITEM, 
		"Name=encuser", "Value=", ENDITEM, 
		"Name=hasplugin", "Value=4.9.1", ENDITEM, 
		"Name=lpversion", "Value=4.9.1", ENDITEM, 
		LAST);

	web_submit_data("getCSRFToken.php", 
		"Action=https://lastpass.com/getCSRFToken.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("X-CSRF-TOKEN", 
		"MTUyNTkwNjc2OS4xNzk1LdEObKre54Cxh9p3sCODk9fFF2enCXsLfxD1N9V/sfzt");

	web_url("urls", 
		"URL=https://lastpass.com/lmiapi/topsites/urls", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("lang=en_US; DOMAIN=lp-push-server-905.lastpass.com");

	web_websocket_connect("ID=0", 
		"URI=wss://lp-push-server-905.lastpass.com/ws/07fa0394ac53066f0221636c6e1329d607619a787f2983e67677cc448825c358", 
		"Origin=chrome-extension://hdokiejnpimakedhajhdlcegeplioahd", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"channel\":\"/meta/handshake\",\"version\":\"1.0\",\"supportedConnectionTypes\":[\"callback-polling\"]}", 
		"IsBinary=0", 
		LAST);

	web_submit_data("geticon.php", 
		"Action=https://lastpass.com/geticon.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=sentms", "Value=1525906769637", ENDITEM, 
		"Name=versionchrome", "Value=1", ENDITEM, 
		"Name=username", "Value=mark.steffensen@hpe.com", ENDITEM, 
		"Name=requid", "Value=145476852", ENDITEM, 
		"Name=wxsessid", "Value=rnUB1r3kACxSRslJzc1Pvkhajo9", ENDITEM, 
		"Name=sessonly", "Value=0", ENDITEM, 
		"Name=token", "Value=MTUyNTkwNjc2OC45OTU4LcgnnLVQ+C+j7PSqD7kHZwoTUU6nhtQrQnjD5dU43rYk", ENDITEM, 
		"Name=requesthash", "Value=O41k+XEogq6W8sSZD1vAJkeiTy8eAht0P8RvrU10ZIY=", ENDITEM, 
		"Name=requestsrc", "Value=cr", ENDITEM, 
		"Name=encuser", "Value=O41k+XEogq6W8sSZD1vAJkeiTy8eAht0P8RvrU10ZIY=", ENDITEM, 
		"Name=hasplugin", "Value=4.9.1", ENDITEM, 
		"Name=lpversion", "Value=4.9.1", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"http://advantageonlineshopping.com");

	web_custom_request("de024099ca5f4cd09d1a738dc048405b", 
		"URL=https://apppulse-web-data.saas.hpe.com/hpclientmon/browser_data/de024099ca5f4cd09d1a738dc048405b/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body="
		"U1Q7O3Nlc3Npb25faWQ7O2NsX3RtX29mZnNldDs7bXNnX3Q7O2FwcF9rZXk7O2JyX25hbWU7O2JyX3Zlcjs7b3NfbmFtZTs7b3NfdmVyOztsYW5nOztpbmZfdmVyc2lvbjs7dmlzaXRfdGltZTs7CmRlMDI0MDk5Y2E1ZjRjZDA5ZDFhNzM4ZGMwNDg0MDViOzszNjA7OzE1MjU5MDY3Njk2Mjc7OzFkcmV1bjJnbXQ7O0Nocm9tZTs7MTs7V2luMzI7Ozs7ZW4tVVM7OzE7OzE1MjU5MDY3MjgxNTI7OwpCUk9XU0VSSFBBR0U7O2Nvbl9zdDs7Y29uX2VuZDs7ZG9tX2xrX2VuZDs7ZG9tX2xrX3N0Oztkb21fY29uX2xkX2V2X2VuZDs7ZG9tX2Nvbl9sZF9ldl9zdDs7ZG9tX2NvbXBsZXRlOztmZXRjaF9zdDs7bGRfZXZfZW5kOztsZF9ldl9zdDs7bmF2X3N0OztuYXZfdHlwZT"
		"s7bnRfcmVkX2NudDs7cmVkX2VuZDs7cmVkX3N0OztyZXFfc3Q7O3Jlc19zdDs7c2VjX2Nvbl9zdDs7dW5sX2V2X2VuZDs7dW5sX2V2X3N0OztyZXNfZW5kOztkb21faW50cjs7ZG9tX2xvYWQ7O3JlZmVycmVyOzticl90b3RhbF90aW1lOzt0aXRsZTs7cGdfbGRfdXNyX3BlcmN2Oztpc19maXJzdDs7c3JfaWQ7O3VybDs7dHJfdXJsOzsKQlJPV1NFUlBBR0U7OwoxNTI1OTA2NzMxNDQwOzsxNTI1OTA2NzMxNjE5OzsxNTI1OTA2NzMxNDQwOzsxNTI1OTA2NzMxNDAyOzsxNTI1OTA2NzM4NzY2OzsxNTI1OTA2NzM4NzY2OzsxNTI1OTA2NzM5NzIyOzsxNTI1OTA2NzI4NTEyOzsxNTI1OTA2NzM5NzU0OzsxNTI1OTA2NzM5NzIyOzsxNTI1OTA2NzI4NDg2OzswOzswOzsw"
		"OzswOzsxNTI1OTA2NzMyMDUwOzsxNTI1OTA2NzMyNzUyOzswOzswOzswOzsxNTI1OTA2NzMyOTU1OzsxNTI1OTA2NzM4NzY2OzsxNTI1OTA2NzMzMDE5Ozs7OzExMjY4OzvCoEFkdmFudGFnZSBTaG9wcGluZzs7MTUwNDQ7OzE7Oy05OTYzMjk4NTU3OTEzNDU4MDI7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLzs7CkJST1dTRVJIUkVRVUVTVDs7cmVxX3N0OztyZXNwX3N0OztyZXNwX2VuZDs7cmVxX3NpemU7O3Jlc3BfY29kZTs7cmVxX21ldGhvZDs7dXJsOzt0cl91cmw7O3BnX3VybDs7cGdfdHJfdXJsOztzcl9pZDs7cGdfc3JfaWQ7O25ldHdvcmtfdGltZTs7cGdfc3RhcnRfdG"
		"ltZTs7aXNfZmlyc3RfYWpheF9lcnJvcjs7aXNfZmlyc3RfZXJyb3I7O3BnX3BlcmNlaXZlZF9kdXI7O2VuZGVkX2JlZm9yZV9wZXJjdjs7cmVzcF9sZW5ndGg7O3BnX2lzX3ZpcnR1YWw7OwpCUk9XU0VSUkVRVUVTVDs7CjE1MjU5MDY3Mzk1NDg7OzE1MjU5MDY3Mzk1OTc7OzE1MjU5MDY3Mzk1OTg7OzY2OzsyMDA7O0dFVDs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS9zZXJ2aWNlcy5wcm9wZXJ0aWVzOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tL3NlcnZpY2VzLnByb3BlcnRpZXM7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLzs7LTE7Oy05"
		"OTYzMjk4NTU3OTEzNDU4MDI7OzUwOzsxNTI1OTA2NzI4NDg2OzswOzswOzsxNTA0NDs7MTs7MTE5Mjs7MDs7CjE1MjU5MDY3NDAwMTc7OzE1MjU5MDY3NDAzNTY7OzE1MjU5MDY3NDAzNTY7OzEyNDs7MjAwOztHRVQ7O2h0dHA6Ly81Mi4zOC4xMzguNS9jYXRhbG9nL2FwaS92MS9EZW1vQXBwQ29uZmlnL3BhcmFtZXRlcnMvYnlfdG9vbC9BTEw7O2h0dHA6Ly81Mi4zOC4xMzguNS9jYXRhbG9nL2FwaS92MS9EZW1vQXBwQ29uZmlnL3BhcmFtZXRlcnMvYnlfdG9vbC9BTEw7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLzs7NzYyMzE0OTU4NzI1NTI2NTI1ODs7LTk5NjMyOTg1NTc5MT"
		"M0NTgwMjs7MzM5OzsxNTI1OTA2NzI4NDg2OzswOzswOzsxNTA0NDs7MTs7MTg1ODg7OzA7OwoxNTI1OTA2NzQwMDUyOzsxNTI1OTA2NzQwNTA1OzsxNTI1OTA2NzQwNTA1OzsxMjQ7OzIwMDs7R0VUOztodHRwOi8vNTIuMzguMTM4LjUvY2F0YWxvZy9hcGkvdjEvRGVtb0FwcENvbmZpZy9wYXJhbWV0ZXJzL2J5X3Rvb2wvQUxMOztodHRwOi8vNTIuMzguMTM4LjUvY2F0YWxvZy9hcGkvdjEvRGVtb0FwcENvbmZpZy9wYXJhbWV0ZXJzL2J5X3Rvb2wvQUxMOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLzs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS87Ozc2MjMxNDk1ODcyNTUyNjUyNTg7Oy05OTYzMjk4NTU3OTEzNDU4MDI7OzQ1"
		"Mzs7MTUyNTkwNjcyODQ4Njs7MDs7MDs7MTUwNDQ7OzE7OzE4NTg4OzswOzsKMTUyNTkwNjc0MDM2Nzs7MTUyNTkwNjc0MDc0Mzs7MTUyNTkwNjc0MDc0NDs7NjEyOzsyMDA7O1BPU1Q7O2h0dHA6Ly81Mi4zOC4xMzguNTo4MDgxL2FjY291bnRzZXJ2aWNlL0dldEFjY291bnRDb25maWd1cmF0aW9uUmVxdWVzdDs7aHR0cDovLzUyLjM4LjEzOC41OjgwODEvYWNjb3VudHNlcnZpY2UvR2V0QWNjb3VudENvbmZpZ3VyYXRpb25SZXF1ZXN0OztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLzs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS87OzUxMDA1NzQ5NjgzNTU2NTEwMjU7Oy05OTYzMjk4NTU3OTEzNDU4MDI7OzM3Nzs7MTUyNTkwNj"
		"cyODQ4Njs7MDs7MDs7MTUwNDQ7OzE7OzExNjE7OzA7OwoxNTI1OTA2NzQwNTA3OzsxNTI1OTA2NzQwNzUzOzsxNTI1OTA2NzQwNzUzOzs2MTI7OzIwMDs7UE9TVDs7aHR0cDovLzUyLjM4LjEzOC41OjgwODEvYWNjb3VudHNlcnZpY2UvR2V0QWNjb3VudENvbmZpZ3VyYXRpb25SZXF1ZXN0OztodHRwOi8vNTIuMzguMTM4LjU6ODA4MS9hY2NvdW50c2VydmljZS9HZXRBY2NvdW50Q29uZmlndXJhdGlvblJlcXVlc3Q7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLzs7NTEwMDU3NDk2ODM1NTY1MTAyNTs7LTk5NjMyOTg1NTc5MTM0NTgwMjs7MjQ2OzsxNTI1OTA2NzI4NDg2OzswOzsw"
		"OzsxNTA0NDs7MTs7MTE1OTs7MDs7CjE1MjU5MDY3NDA3NTc7OzE1MjU5MDY3NDA5ODc7OzE1MjU5MDY3NDA5ODc7Ozk4OzsyMDA7O0dFVDs7aHR0cDovLzUyLjM4LjEzOC41L2NhdGFsb2cvYXBpL3YxL2NhdGVnb3JpZXM7O2h0dHA6Ly81Mi4zOC4xMzguNS9jYXRhbG9nL2FwaS92MS9jYXRlZ29yaWVzOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLzs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS87OzI5ODcxMjQ3NDIyMjY5MTUwNTs7LTk5NjMyOTg1NTc5MTM0NTgwMjs7MjMwOzsxNTI1OTA2NzI4NDg2OzswOzswOzsxNTA0NDs7MTs7MTMxODA7OzA7OwoxNTI1OTA2NzQxNTkyOzsxNTI1OTA2NzQxODAzOzsxNTI1OTA2NzQxOD"
		"AzOzsxMTg7OzIwMDs7R0VUOztodHRwOi8vNTIuMzguMTM4LjUvY2F0YWxvZy9hcGkvdjEvZGVhbHMvc2VhcmNoP2RlYWxPZlRoZURheT0qOztodHRwOi8vNTIuMzguMTM4LjUvY2F0YWxvZy9hcGkvdjEvZGVhbHMvc2VhcmNoPyo7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLzs7LTE0OTk1NjUxOTE3NzEzNTg5MzA7Oy05OTYzMjk4NTU3OTEzNDU4MDI7OzIxMTs7MTUyNTkwNjcyODQ4Njs7MDs7MDs7MTUwNDQ7OzE7Ozk3Mzs7MDs7CjE1MjU5MDY3NDI0MDc7OzE1MjU5MDY3NDI0NTk7OzE1MjU5MDY3NDI0NjA7OzEyMzs7MjAwOztHRVQ7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVz"
		"aG9wcGluZy5jb20vYXBwL3RlbXBGaWxlcy9wb3B1bGFyUHJvZHVjdHMuanNvbjs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS9hcHAvdGVtcEZpbGVzL3BvcHVsYXJQcm9kdWN0cy5qc29uOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLzs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS87Oy0xOzstOTk2MzI5ODU1NzkxMzQ1ODAyOzs1Mzs7MTUyNTkwNjcyODQ4Njs7MDs7MDs7MTUwNDQ7OzE7OzI2MzE7OzA7OwoxNTI1OTA2NzQyNDYzOzsxNTI1OTA2NzQyNTMwOzsxNTI1OTA2NzQyNTMxOzs4OTs7MjAwOztHRVQ7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vYXBwL3ZpZXdzL2hvbWUtcGFnZS"
		"5odG1sOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tL2FwcC92aWV3cy9ob21lLXBhZ2UuaHRtbDs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS87O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vOzstMTs7LTk5NjMyOTg1NTc5MTM0NTgwMjs7Njg7OzE1MjU5MDY3Mjg0ODY7OzA7OzA7OzE1MDQ0OzsxOzsxMjMxNDs7MDs7CjE1MjU5MDY3NDAwMTc7OzE1MjU5MDY3NDM1Mjk7OzE1MjU5MDY3NDM1MzA7OzEwNzs7MjAwOztHRVQ7O2h0dHA6Ly81Mi4zOC4xMzguNS9jYXRhbG9nL2FwaS92MS9jYXRlZ29yaWVzL2FsbF9kYXRhOztodHRwOi8vNTIuMzguMTM4LjUvY2F0YWxvZy9hcGkvdjEvY2F0ZWdvcmllcy9hbGxf"
		"ZGF0YTs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS87O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vOzstMTQ5OTU2NTE5MTc3MTM1ODkzMDs7LTk5NjMyOTg1NTc5MTM0NTgwMjs7MzUxMzs7MTUyNTkwNjcyODQ4Njs7MDs7MDs7MTUwNDQ7OzA7OzQ5NDA2OzswOzsK", 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://hdokiejnpimakedhajhdlcegeplioahd");

	web_submit_data("geticon.php_2", 
		"Action=https://lastpass.com/geticon.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=sentms", "Value=1525906769665", ENDITEM, 
		"Name=big", "Value=1", ENDITEM, 
		"Name=versionchrome", "Value=1", ENDITEM, 
		"Name=username", "Value=mark.steffensen@hpe.com", ENDITEM, 
		"Name=size", "Value=sq", ENDITEM, 
		"Name=domain", "Value=landrysselect.com", ENDITEM, 
		"Name=requid", "Value=145476852", ENDITEM, 
		"Name=wxsessid", "Value=rnUB1r3kACxSRslJzc1Pvkhajo9", ENDITEM, 
		"Name=sessonly", "Value=0", ENDITEM, 
		"Name=token", "Value=MTUyNTkwNjc2OC45OTU4LcgnnLVQ+C+j7PSqD7kHZwoTUU6nhtQrQnjD5dU43rYk", ENDITEM, 
		"Name=requesthash", "Value=O41k+XEogq6W8sSZD1vAJkeiTy8eAht0P8RvrU10ZIY=", ENDITEM, 
		"Name=requestsrc", "Value=cr", ENDITEM, 
		"Name=encuser", "Value=O41k+XEogq6W8sSZD1vAJkeiTy8eAht0P8RvrU10ZIY=", ENDITEM, 
		"Name=hasplugin", "Value=4.9.1", ENDITEM, 
		"Name=lpversion", "Value=4.9.1", ENDITEM, 
		LAST);

	web_submit_data("geticon.php_3", 
		"Action=https://lastpass.com/geticon.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=sentms", "Value=1525906769773", ENDITEM, 
		"Name=big", "Value=1", ENDITEM, 
		"Name=versionchrome", "Value=1", ENDITEM, 
		"Name=username", "Value=mark.steffensen@hpe.com", ENDITEM, 
		"Name=size", "Value=sq", ENDITEM, 
		"Name=domain", "Value=landrysselect.com", ENDITEM, 
		"Name=requid", "Value=145476852", ENDITEM, 
		"Name=wxsessid", "Value=rnUB1r3kACxSRslJzc1Pvkhajo9", ENDITEM, 
		"Name=sessonly", "Value=0", ENDITEM, 
		"Name=token", "Value=MTUyNTkwNjc2OC45OTU4LcgnnLVQ+C+j7PSqD7kHZwoTUU6nhtQrQnjD5dU43rYk", ENDITEM, 
		"Name=requesthash", "Value=O41k+XEogq6W8sSZD1vAJkeiTy8eAht0P8RvrU10ZIY=", ENDITEM, 
		"Name=requestsrc", "Value=cr", ENDITEM, 
		"Name=encuser", "Value=O41k+XEogq6W8sSZD1vAJkeiTy8eAht0P8RvrU10ZIY=", ENDITEM, 
		"Name=hasplugin", "Value=4.9.1", ENDITEM, 
		"Name=lpversion", "Value=4.9.1", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_url("product-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Speakers",LR_AUTO);

	lr_start_transaction("Tablets");

	web_add_header("chrome-proxy", 
		"frfr");

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=1", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=1",LAST);*/

	web_stream_open("ID=1", "URL=http://advantageonlineshopping.com/css/videos/13543361_299823923688824_1410005144_n.mp4", "Protocol=HTTP", LAST);

	web_stream_close("ID=1", LAST);

	lr_end_transaction("Tablets",LR_AUTO);

	web_add_auto_header("Origin", 
		"http://advantageonlineshopping.com");

	lr_think_time(11);

	web_custom_request("de024099ca5f4cd09d1a738dc048405b_2", 
		"URL=https://apppulse-web-data.saas.hpe.com/hpclientmon/browser_data/de024099ca5f4cd09d1a738dc048405b/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body="
		"U1Q7O3Nlc3Npb25faWQ7O2NsX3RtX29mZnNldDs7bXNnX3Q7O2FwcF9rZXk7O2JyX25hbWU7O2JyX3Zlcjs7b3NfbmFtZTs7b3NfdmVyOztsYW5nOztpbmZfdmVyc2lvbjs7dmlzaXRfdGltZTs7CmRlMDI0MDk5Y2E1ZjRjZDA5ZDFhNzM4ZGMwNDg0MDViOzszNjA7OzE1MjU5MDY3OTkyOTk7OzFkcmV1bjJnbXQ7O0Nocm9tZTs7MTs7V2luMzI7Ozs7ZW4tVVM7OzE7OzE1MjU5MDY3MjgxNTI7OwpCUk9XU0VSSFJFUVVFU1Q7O3JlcV9zdDs7cmVzcF9zdDs7cmVzcF9lbmQ7O3JlcV9zaXplOztyZXNwX2NvZGU7O3JlcV9tZXRob2Q7O3VybDs7dHJfdXJsOztwZ191cmw7O3BnX3RyX3VybDs7c3JfaWQ7O3BnX3NyX2lkOztuZXR3b3JrX3RpbWU7O3BnX3N0YXJ0X3RpbW"
		"U7O2lzX2ZpcnN0X2FqYXhfZXJyb3I7O2lzX2ZpcnN0X2Vycm9yOztwZ19wZXJjZWl2ZWRfZHVyOztlbmRlZF9iZWZvcmVfcGVyY3Y7O3Jlc3BfbGVuZ3RoOztwZ19pc192aXJ0dWFsOzsKQlJPV1NFUlJFUVVFU1Q7OwoxNTI1OTA2NzY1MDgzOzsxNTI1OTA2NzY2NDA5OzsxNTI1OTA2NzY2NDA5OzsxMDk7OzIwMDs7R0VUOztodHRwOi8vNTIuMzguMTM4LjUvY2F0YWxvZy9hcGkvdjEvY2F0ZWdvcmllcy9hdHRyaWJ1dGVzOztodHRwOi8vNTIuMzguMTM4LjUvY2F0YWxvZy9hcGkvdjEvY2F0ZWdvcmllcy9hdHRyaWJ1dGVzOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLyMvcHJvZHVjdC8yMDs7LyMvcHJvZHVjdC8yMDs7LTE0OTk1NjUxOTE3NzEz"
		"NTg5MzA7Oy0xOzsxMzI2OzsxNTI1OTA2NzY0NzMxOzswOzswOzszMzE2OzsxOzs2NTA1OzsxOzsKMTUyNTkwNjc2NjQxMDs7MTUyNTkwNjc2NzU0Mjs7MTUyNTkwNjc2NzU0Mjs7OTM7OzIwMDs7R0VUOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tL2FwcC92aWV3cy9jYXRlZ29yeS1wYWdlLmh0bWw7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vYXBwL3ZpZXdzL2NhdGVnb3J5LXBhZ2UuaHRtbDs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS8jL3Byb2R1Y3QvMjA7Oy8jL3Byb2R1Y3QvMjA7Oy0xOzstMTs7MTEzMjs7MTUyNTkwNjc2NDczMTs7MDs7MDs7MzMxNjs7MTs7MjE5MTs7MTs7CjE1MjU5MDY3NzA1MT"
		"E7OzE1MjU5MDY3NzA1NjU7OzE1MjU5MDY3NzA1Njg7OzkyOzsyMDA7O0dFVDs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS9hcHAvdmlld3MvcHJvZHVjdC1wYWdlLmh0bWw7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vYXBwL3ZpZXdzL3Byb2R1Y3QtcGFnZS5odG1sOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLyM7Oy87Oy0xOzstMTs7NTc7OzE1MjU5MDY3NzA1MDQ7OzA7OzA7OzI3MjE7OzE7OzY3ODM7OzE7OwpCUk9XU0VSSFZJUlRVQUxQQUdFOztwZ19zdDs7aG9zdF9wZzs7cGdfbGRfdXNyX3BlcmN2OztwZ19uYW1lOztpc19maXJzdDs7CkJST1dTRVJWSVJUVUFMUEFHRTs7CjE1MjU5MDY3NjQ3MzE7"
		"Ozs7MzMxNjs7LyMvcHJvZHVjdC8yMDs7MDs7CjE1MjU5MDY3NzA1MDQ7Ozs7MjcyMTs7Lzs7MDs7CjE1MjU5MDY3NzMzMzE7Ozs7ODs7LyMvOzswOzsKMTUyNTkwNjc3MzMzMTs7OzsyNzU0OzsvIy87OzA7OwoxNTI1OTA2Nzg3NjgyOzs7OzQyNjs7LyMvcHJvZHVjdC8xNjs7MDs7CjE1MjU5MDY3OTAyMjc7Ozs7MjUxMTs7Lzs7MDs7CjE1MjU5MDY3OTI4MjI7Ozs7Mzs7LyMvOzswOzsKMTUyNTkwNjc5MjgyMjs7Ozs0NTQ7Oy8jLzs7MDs7CkpTSEVSUk9SUzs7ZmlsZV91cmw7O21zZzs7bGluZTs7Y29sOztmdW5jOztuYW1lOzt0cmFjZTs7ZXJfdGltZTs7c3JfaWQ7O3BnX3RyX3VybDs7cGdfdXJsOztwZ19zdGFydF90aW1lOztpc19maXJzdF9qc19lcnJvcjs7aX"
		"NfZmlyc3RfZXJyb3I7O3BnX2lzX3ZpcnR1YWw7OwpKU0VSUk9SUzs7Cjs7VHlwZUVycm9yOiBDYW5ub3QgcmVhZCBwcm9wZXJ0eSAnaW5zZXJ0QmVmb3JlJyBvZiBudWxsOzstMTs7LTE7O1RCRDs7OztUeXBlRXJyb3I6IENhbm5vdCByZWFkIHByb3BlcnR5ICdpbnNlcnRCZWZvcmUnIG9mIG51bGw7OzE1MjU5MDY3NzA2MzY7Oy0xOzsvIy9wcm9kdWN0LzIwOztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLyMvcHJvZHVjdC8yMDs7MTUyNTkwNjcyODE1Mjs7MTs7MTs7MTs7Cjs7VHlwZUVycm9yOiBDYW5ub3QgcmVhZCBwcm9wZXJ0eSAnaW5zZXJ0QmVmb3JlJyBvZiBudWxsOzstMTs7LTE7O1RCRDs7OztUeXBlRXJyb3I6IENhbm5vdCByZWFkIHBy"
		"b3BlcnR5ICdpbnNlcnRCZWZvcmUnIG9mIG51bGw7OzE1MjU5MDY3OTAyNTg7Oy0xOzsvIy9wcm9kdWN0LzE2OztodHRwOi8vYWR2YW50YWdlb25saW5lc2hvcHBpbmcuY29tLyMvcHJvZHVjdC8xNjs7MTUyNTkwNjcyODE1Mjs7MTs7MTs7MTs7Cg==", 
		LAST);

	lr_start_transaction("Headphones");

	web_url("MostPopularComments", 
		"URL=http://52.38.138.5/catalog/api/v1/MostPopularComments", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Headphones",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("Mice");

	web_custom_request("de024099ca5f4cd09d1a738dc048405b_3", 
		"URL=https://apppulse-web-data.saas.hpe.com/hpclientmon/browser_data/de024099ca5f4cd09d1a738dc048405b/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body="
		"U1Q7O3Nlc3Npb25faWQ7O2NsX3RtX29mZnNldDs7bXNnX3Q7O2FwcF9rZXk7O2JyX25hbWU7O2JyX3Zlcjs7b3NfbmFtZTs7b3NfdmVyOztsYW5nOztpbmZfdmVyc2lvbjs7dmlzaXRfdGltZTs7CmRlMDI0MDk5Y2E1ZjRjZDA5ZDFhNzM4ZGMwNDg0MDViOzszNjA7OzE1MjU5MDY4MjkyOTg7OzFkcmV1bjJnbXQ7O0Nocm9tZTs7MTs7V2luMzI7Ozs7ZW4tVVM7OzE7OzE1MjU5MDY3MjgxNTI7OwpCUk9XU0VSSFJFUVVFU1Q7O3JlcV9zdDs7cmVzcF9zdDs7cmVzcF9lbmQ7O3JlcV9zaXplOztyZXNwX2NvZGU7O3JlcV9tZXRob2Q7O3VybDs7dHJfdXJsOztwZ191cmw7O3BnX3RyX3VybDs7c3JfaWQ7O3BnX3NyX2lkOztuZXR3b3JrX3RpbWU7O3BnX3N0YXJ0X3RpbW"
		"U7O2lzX2ZpcnN0X2FqYXhfZXJyb3I7O2lzX2ZpcnN0X2Vycm9yOztwZ19wZXJjZWl2ZWRfZHVyOztlbmRlZF9iZWZvcmVfcGVyY3Y7O3Jlc3BfbGVuZ3RoOztwZ19pc192aXJ0dWFsOzsKQlJPV1NFUlJFUVVFU1Q7OwoxNTI1OTA2ODExMDM2OzsxNTI1OTA2ODE2MTkwOzsxNTI1OTA2ODE2MTkwOzsxMDc7OzIwMDs7R0VUOztodHRwOi8vNTIuMzguMTM4LjUvY2F0YWxvZy9hcGkvdjEvTW9zdFBvcHVsYXJDb21tZW50czs7aHR0cDovLzUyLjM4LjEzOC41L2NhdGFsb2cvYXBpL3YxL01vc3RQb3B1bGFyQ29tbWVudHM7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vIzs7Lzs7Mjk4NzEyNDc0MjIyNjkxNTA1OzstMTs7NTE1NDs7MTUyNTkwNjgxMTAx"
		"MDs7MDs7MDs7MjIwMTs7MDs7MTYzMTs7MTs7CkJST1dTRVJIVklSVFVBTFBBR0U7O3BnX3N0Oztob3N0X3BnOztwZ19sZF91c3JfcGVyY3Y7O3BnX25hbWU7O2lzX2ZpcnN0OzsKQlJPV1NFUlZJUlRVQUxQQUdFOzsKMTUyNTkwNjgwODk0NTs7Ozs0MjI7Oy8jL3Byb2R1Y3QvMTU7OzA7OwoxNTI1OTA2ODExMDEwOzs7OzIyMDE7Oy87OzA7OwoxNTI1OTA2ODEzMzI2Ozs7OzI7Oy8jLzs7MDs7CjE1MjU5MDY4MTMzMjY7Ozs7NDUxOzsvIy87OzA7OwpKU0hFUlJPUlM7O2ZpbGVfdXJsOzttc2c7O2xpbmU7O2NvbDs7ZnVuYzs7bmFtZTs7dHJhY2U7O2VyX3RpbWU7O3NyX2lkOztwZ190cl91cmw7O3BnX3VybDs7cGdfc3RhcnRfdGltZTs7aXNfZmlyc3RfanNfZXJyb3"
		"I7O2lzX2ZpcnN0X2Vycm9yOztwZ19pc192aXJ0dWFsOzsKSlNFUlJPUlM7Owo7O1R5cGVFcnJvcjogQ2Fubm90IHJlYWQgcHJvcGVydHkgJ2luc2VydEJlZm9yZScgb2YgbnVsbDs7LTE7Oy0xOztUQkQ7Ozs7VHlwZUVycm9yOiBDYW5ub3QgcmVhZCBwcm9wZXJ0eSAnaW5zZXJ0QmVmb3JlJyBvZiBudWxsOzsxNTI1OTA2ODExMDQzOzstMTs7LyMvcHJvZHVjdC8xNTs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS8jL3Byb2R1Y3QvMTU7OzE1MjU5MDY3MjgxNTI7OzE7OzE7OzE7Owo=", 
		LAST);

	lr_end_transaction("Mice",LR_AUTO);

	lr_start_transaction("Laptops");

	web_custom_request("de024099ca5f4cd09d1a738dc048405b_4", 
		"URL=https://apppulse-web-data.saas.hpe.com/hpclientmon/browser_data/de024099ca5f4cd09d1a738dc048405b/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body="
		"U1Q7O3Nlc3Npb25faWQ7O2NsX3RtX29mZnNldDs7bXNnX3Q7O2FwcF9rZXk7O2JyX25hbWU7O2JyX3Zlcjs7b3NfbmFtZTs7b3NfdmVyOztsYW5nOztpbmZfdmVyc2lvbjs7dmlzaXRfdGltZTs7CmRlMDI0MDk5Y2E1ZjRjZDA5ZDFhNzM4ZGMwNDg0MDViOzszNjA7OzE1MjU5MDY4NTkzMDU7OzFkcmV1bjJnbXQ7O0Nocm9tZTs7MTs7V2luMzI7Ozs7ZW4tVVM7OzE7OzE1MjU5MDY3MjgxNTI7OwpCUk9XU0VSSFZJUlRVQUxQQUdFOztwZ19zdDs7aG9zdF9wZzs7cGdfbGRfdXNyX3BlcmN2OztwZ19uYW1lOztpc19maXJzdDs7CkJST1dTRVJWSVJUVUFMUEFHRTs7CjE1MjU5MDY4MjU5ODI7Ozs7NDM5OzsvIy9jYXRlZ29yeS9NaWNlLzU7OzA7OwoxNTI1OTA2ODMwNT"
		"I4Ozs7OzIwMjc7Oy87OzA7OwoxNTI1OTA2ODMyNjY0Ozs7OzM7Oy8jLzs7MDs7CjE1MjU5MDY4MzI2NjQ7Ozs7NDUyOzsvIy87OzA7OwpKU0hFUlJPUlM7O2ZpbGVfdXJsOzttc2c7O2xpbmU7O2NvbDs7ZnVuYzs7bmFtZTs7dHJhY2U7O2VyX3RpbWU7O3NyX2lkOztwZ190cl91cmw7O3BnX3VybDs7cGdfc3RhcnRfdGltZTs7aXNfZmlyc3RfanNfZXJyb3I7O2lzX2ZpcnN0X2Vycm9yOztwZ19pc192aXJ0dWFsOzsKSlNFUlJPUlM7Owo7O1R5cGVFcnJvcjogQ2Fubm90IHJlYWQgcHJvcGVydHkgJ2luc2VydEJlZm9yZScgb2YgbnVsbDs7LTE7Oy0xOztUQkQ7Ozs7VHlwZUVycm9yOiBDYW5ub3QgcmVhZCBwcm9wZXJ0eSAnaW5zZXJ0QmVmb3JlJyBvZiBudWxsOzsx"
		"NTI1OTA2ODMwNTYwOzstMTs7LyMvcHJvZHVjdC8yOTs7aHR0cDovL2FkdmFudGFnZW9ubGluZXNob3BwaW5nLmNvbS8jL3Byb2R1Y3QvMjk7OzE1MjU5MDY3MjgxNTI7OzE7OzE7OzE7Owo=", 
		LAST);

	web_websocket_connect("ID=1", 
		"URI=wss://lp-push-server-905.lastpass.com/ws/07fa0394ac53066f0221636c6e1329d607619a787f2983e67677cc448825c358", 
		"Origin=chrome-extension://hdokiejnpimakedhajhdlcegeplioahd", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"channel\":\"/meta/handshake\",\"version\":\"1.0\",\"supportedConnectionTypes\":[\"callback-polling\"]}", 
		"IsBinary=0", 
		LAST);

	lr_end_transaction("Laptops",LR_AUTO);

	web_add_auto_header("Origin", 
		"http://advantageonlineshopping.com");

	lr_think_time(9);

	web_custom_request("de024099ca5f4cd09d1a738dc048405b_5", 
		"URL=https://apppulse-web-data.saas.hpe.com/hpclientmon/browser_data/de024099ca5f4cd09d1a738dc048405b/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body="
		"U1Q7O3Nlc3Npb25faWQ7O2NsX3RtX29mZnNldDs7bXNnX3Q7O2FwcF9rZXk7O2JyX25hbWU7O2JyX3Zlcjs7b3NfbmFtZTs7b3NfdmVyOztsYW5nOztpbmZfdmVyc2lvbjs7dmlzaXRfdGltZTs7CmRlMDI0MDk5Y2E1ZjRjZDA5ZDFhNzM4ZGMwNDg0MDViOzszNjA7OzE1MjU5MDY4ODkzMDQ7OzFkcmV1bjJnbXQ7O0Nocm9tZTs7MTs7V2luMzI7Ozs7ZW4tVVM7OzE7OzE1MjU5MDY3MjgxNTI7OwpCUk9XU0VSSFZJUlRVQUxQQUdFOztwZ19zdDs7aG9zdF9wZzs7cGdfbGRfdXNyX3BlcmN2OztwZ19uYW1lOztpc19maXJzdDs7CkJST1dTRVJWSVJUVUFMUEFHRTs7CjE1MjU5MDY4NTExODQ7Ozs7MjU2MDg7Oy8jL3Byb2R1Y3QvOTs7MDs7CjE1MjU5MDY4NzkwOTk7Oz"
		"s7MjQ3ODs7Lzs7MDs7CjE1MjU5MDY4ODE3MDE7Ozs7Mzs7LyMvOzswOzsKMTUyNTkwNjg4MTcwMTs7Ozs0NTE7Oy8jLzs7MDs7CkpTSEVSUk9SUzs7ZmlsZV91cmw7O21zZzs7bGluZTs7Y29sOztmdW5jOztuYW1lOzt0cmFjZTs7ZXJfdGltZTs7c3JfaWQ7O3BnX3RyX3VybDs7cGdfdXJsOztwZ19zdGFydF90aW1lOztpc19maXJzdF9qc19lcnJvcjs7aXNfZmlyc3RfZXJyb3I7O3BnX2lzX3ZpcnR1YWw7OwpKU0VSUk9SUzs7Cjs7VHlwZUVycm9yOiBDYW5ub3QgcmVhZCBwcm9wZXJ0eSAnaW5zZXJ0QmVmb3JlJyBvZiBudWxsOzstMTs7LTE7O1RCRDs7OztUeXBlRXJyb3I6IENhbm5vdCByZWFkIHByb3BlcnR5ICdpbnNlcnRCZWZvcmUnIG9mIG51bGw7OzE1MjU5"
		"MDY4NzkxMzA7Oy0xOzsvIy9wcm9kdWN0Lzk7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vIy9wcm9kdWN0Lzk7OzE1MjU5MDY3MjgxNTI7OzE7OzE7OzE7Owo=", 
		LAST);

	lr_think_time(6);

	lr_start_transaction("AddToCart");

	lr_end_transaction("AddToCart",LR_AUTO);

	lr_end_transaction("FullProcess",LR_AUTO);

	web_custom_request("de024099ca5f4cd09d1a738dc048405b_6", 
		"URL=https://apppulse-web-data.saas.hpe.com/hpclientmon/browser_data/de024099ca5f4cd09d1a738dc048405b/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body="
		"U1Q7O3Nlc3Npb25faWQ7O2NsX3RtX29mZnNldDs7bXNnX3Q7O2FwcF9rZXk7O2JyX25hbWU7O2JyX3Zlcjs7b3NfbmFtZTs7b3NfdmVyOztsYW5nOztpbmZfdmVyc2lvbjs7dmlzaXRfdGltZTs7CmRlMDI0MDk5Y2E1ZjRjZDA5ZDFhNzM4ZGMwNDg0MDViOzszNjA7OzE1MjU5MDY5MTkzMTA7OzFkcmV1bjJnbXQ7O0Nocm9tZTs7MTs7V2luMzI7Ozs7ZW4tVVM7OzE7OzE1MjU5MDY3MjgxNTI7OwpCUk9XU0VSSFZJUlRVQUxQQUdFOztwZ19zdDs7aG9zdF9wZzs7cGdfbGRfdXNyX3BlcmN2OztwZ19uYW1lOztpc19maXJzdDs7CkJST1dTRVJWSVJUVUFMUEFHRTs7CjE1MjU5MDY5MDA0NjQ7Ozs7NDI4OzsvIy9wcm9kdWN0LzIwOzswOzsKMTUyNTkwNjkwMjkxMTs7Oz"
		"s0NjU0OzsvIy9wcm9kdWN0LzIwOzswOzsKMTUyNTkwNjkxMjQxMjs7OzsyNDYzOzsvIy87OzA7OwoxNTI1OTA2OTE0OTk4Ozs7OzQzNjs7LyMvOzswOzsKSlNIRVJST1JTOztmaWxlX3VybDs7bXNnOztsaW5lOztjb2w7O2Z1bmM7O25hbWU7O3RyYWNlOztlcl90aW1lOztzcl9pZDs7cGdfdHJfdXJsOztwZ191cmw7O3BnX3N0YXJ0X3RpbWU7O2lzX2ZpcnN0X2pzX2Vycm9yOztpc19maXJzdF9lcnJvcjs7cGdfaXNfdmlydHVhbDs7CkpTRVJST1JTOzsKOztUeXBlRXJyb3I6IENhbm5vdCByZWFkIHByb3BlcnR5ICdpbnNlcnRCZWZvcmUnIG9mIG51bGw7Oy0xOzstMTs7VEJEOzs7O1R5cGVFcnJvcjogQ2Fubm90IHJlYWQgcHJvcGVydHkgJ2luc2VydEJlZm9yZScg"
		"b2YgbnVsbDs7MTUyNTkwNjkwMjk0NDs7LTE7Oy8jL3Byb2R1Y3QvMjA7O2h0dHA6Ly9hZHZhbnRhZ2VvbmxpbmVzaG9wcGluZy5jb20vIy9wcm9kdWN0LzIwOzsxNTI1OTA2NzI4MTUyOzsxOzsxOzsxOzsK", 
		LAST);

	return 0;
}