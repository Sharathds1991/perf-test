hp()
{

	web_add_header("Origin", 
		"http://localhost");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("index.php", 
		"Action=http://localhost/logic/admin/index.php?load=common/login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=admin", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=redirect", "Value=", ENDITEM, 
		LAST);

	return 0;
}
