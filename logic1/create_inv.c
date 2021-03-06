create_inv()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(10);

	web_url("index.php_10", 
		"URL=http://localhost/logic/admin/index.php?load=billing/invoice/form&token={tokenkey}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/invoice&token={tokenkey}", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("index.php_11", 
		"URL=http://localhost/logic/admin/index.php?load=billing/customer/autocomplete&token={tokenkey}&filter_name=jspiders{usr_id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/invoice/form&token={tokenkey}", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://localhost");

	lr_think_time(33);
	lr_rendezvous("create_in_rend");


	web_submit_data("index.php_12", 
		"Action=http://localhost/logic/admin/index.php?load=billing/invoice/validate_step_1&token={tokenkey}", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/invoice/form&token={tokenkey}", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=customer", "Value=jspiders{usr_id} jspiders{usr_id}", ENDITEM, 
		"Name=customer_id", "Value=667", ENDITEM, 
		"Name=firstname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=lastname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=company", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=website", "Value=jspiders{usr_id}.com", ENDITEM, 
		"Name=email", "Value=jspiders{usr_id}@jspiders{usr_id}.com", ENDITEM, 
		"Name=status_id", "Value=1", ENDITEM, 
		"Name=date_due", "Value=2019-04-08", ENDITEM, 
		LAST);

	lr_think_time(12);

	web_submit_data("index.php_13", 
		"Action=http://localhost/logic/admin/index.php?load=billing/invoice/validate_step_3&token={tokenkey}", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/invoice/form&token={tokenkey}", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=payment_code", "Value=cheque", ENDITEM, 
		"Name=payment_name", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=currency_code", "Value=SGD", ENDITEM, 
		"Name=currency_value", "Value=1.00", ENDITEM, 
		LAST);

	lr_think_time(18);

	web_submit_data("index.php_14", 
		"Action=http://localhost/logic/admin/index.php?load=billing/invoice/validate_step_4&token={tokenkey}", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/invoice/form&token={tokenkey}", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=customer", "Value=jspiders{usr_id} jspiders{usr_id}", ENDITEM, 
		"Name=customer_id", "Value=667", ENDITEM, 
		"Name=firstname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=lastname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=company", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=website", "Value=jspiders{usr_id}.com", ENDITEM, 
		"Name=email", "Value=jspiders{usr_id}@jspiders{usr_id}.com", ENDITEM, 
		"Name=comment", "Value=", ENDITEM, 
		"Name=status_id", "Value=1", ENDITEM, 
		"Name=date_due", "Value=2019-04-08", ENDITEM, 
		"Name=payment_firstname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=payment_lastname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=payment_company", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=payment_address_1", "Value=", ENDITEM, 
		"Name=payment_address_2", "Value=", ENDITEM, 
		"Name=payment_city", "Value=", ENDITEM, 
		"Name=payment_postcode", "Value=", ENDITEM, 
		"Name=payment_country", "Value=", ENDITEM, 
		"Name=payment_zone", "Value=", ENDITEM, 
		"Name=payment_code", "Value=cheque", ENDITEM, 
		"Name=payment_name", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=payment_description", "Value=", ENDITEM, 
		"Name=currency_code", "Value=SGD", ENDITEM, 
		"Name=currency_value", "Value=1.00", ENDITEM, 
		"Name=items[0][title]", "Value=pen", ENDITEM, 
		"Name=items[0][description]", "Value=dsffd", ENDITEM, 
		"Name=items[0][quantity]", "Value=7", ENDITEM, 
		"Name=items[0][converted_price]", "Value=89", ENDITEM, 
		"Name=items[0][price]", "Value=89.0000", ENDITEM, 
		"Name=items[0][tax_class_id]", "Value=1", ENDITEM, 
		"Name=items[0][tax]", "Value=", ENDITEM, 
		"Name=items[0][converted_discount]", "Value=", ENDITEM, 
		"Name=items[0][discount]", "Value=", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("index.php_15", 
		"Action=http://localhost/logic/admin/index.php?load=billing/invoice/form&token={tokenkey}", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/invoice/form&token={tokenkey}", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=customer", "Value=jspiders{usr_id} jspiders{usr_id}", ENDITEM, 
		"Name=customer_id", "Value=667", ENDITEM, 
		"Name=firstname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=lastname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=company", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=website", "Value=jspiders{usr_id}.com", ENDITEM, 
		"Name=email", "Value=jspiders{usr_id}@jspiders{usr_id}.com", ENDITEM, 
		"Name=comment", "Value=", ENDITEM, 
		"Name=status_id", "Value=1", ENDITEM, 
		"Name=date_due", "Value=2019-04-08", ENDITEM, 
		"Name=payment_firstname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=payment_lastname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=payment_company", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=payment_address_1", "Value=", ENDITEM, 
		"Name=payment_address_2", "Value=", ENDITEM, 
		"Name=payment_city", "Value=", ENDITEM, 
		"Name=payment_postcode", "Value=", ENDITEM, 
		"Name=payment_country", "Value=", ENDITEM, 
		"Name=payment_zone", "Value=", ENDITEM, 
		"Name=payment_code", "Value=cheque", ENDITEM, 
		"Name=payment_name", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=payment_description", "Value=", ENDITEM, 
		"Name=currency_code", "Value=SGD", ENDITEM, 
		"Name=currency_value", "Value=1.00", ENDITEM, 
		"Name=items[0][title]", "Value=pen", ENDITEM, 
		"Name=items[0][description]", "Value=dsffd", ENDITEM, 
		"Name=items[0][quantity]", "Value=7", ENDITEM, 
		"Name=items[0][converted_price]", "Value=89", ENDITEM, 
		"Name=items[0][price]", "Value=89.0000", ENDITEM, 
		"Name=items[0][tax_class_id]", "Value=1", ENDITEM, 
		"Name=items[0][tax]", "Value=6.23", ENDITEM, 
		"Name=items[0][converted_discount]", "Value=", ENDITEM, 
		"Name=items[0][discount]", "Value=", ENDITEM, 
		"Name=totals[0][code]", "Value=sub_total", ENDITEM, 
		"Name=totals[0][title]", "Value=Sub-Total", ENDITEM, 
		"Name=totals[0][value]", "Value=623", ENDITEM, 
		"Name=totals[0][sort_order]", "Value=1", ENDITEM, 
		"Name=totals[1][code]", "Value=tax", ENDITEM, 
		"Name=totals[1][title]", "Value=GST", ENDITEM, 
		"Name=totals[1][value]", "Value=43.61", ENDITEM, 
		"Name=totals[1][sort_order]", "Value=3", ENDITEM, 
		"Name=totals[2][code]", "Value=total", ENDITEM, 
		"Name=totals[2][title]", "Value=Total", ENDITEM, 
		"Name=totals[2][value]", "Value=666.61", ENDITEM, 
		"Name=totals[2][sort_order]", "Value=9", ENDITEM, 
		"Name=total", "Value=666.61", ENDITEM, 
		LAST);

	return 0;
}
