create_cus()
{

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(7);

	web_url("index.php_7", 
		"URL=http://localhost/logic/admin/index.php?load=billing/customer/form&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/customer&token=16509acfe2ee0ab19d64ac069ce71986", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://localhost");

	web_submit_form("index.php_8", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=firstname", "Value=jspiders", ENDITEM, 
		"Name=lastname", "Value=jspiders", ENDITEM, 
		"Name=company", "Value=jspiders", ENDITEM, 
		"Name=website", "Value=jspiders.com", ENDITEM, 
		"Name=email", "Value=jspiders@jspiders.com", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=confirm", "Value=123456", ENDITEM, 
		"Name=status", "Value=Enabled", ENDITEM, 
		LAST);

	return 0;
}
