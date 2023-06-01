/*
 * CountryCodes
 * ISO, ISO3, Country, Continent
 */
const char *s_server_countries[] = {
	"AD", "AND", "Andorra", "EU",
	"AE", "ARE", "United Arab Emirates", "AS",
	"AF", "AFG", "Afghanistan", "AS",
	"AG", "ATG", "Antigua and Barbuda", "NA",
	"AI", "AIA", "Anguilla", "NA",
	"AL", "ALB", "Albania", "EU",
	"AM", "ARM", "Armenia", "AS",
	"AO", "AGO", "Angola", "AF",
	"AQ", "ATA", "Antarctica", "AN",
	"AR", "ARG", "Argentina", "SA",
	"AS", "ASM", "American Samoa", "OC",
	"AT", "AUT", "Austria", "EU",
	"AU", "AUS", "Australia", "OC",
	"AW", "ABW", "Aruba", "NA",
	"AX", "ALA", "Aland Islands", "EU",
	"AZ", "AZE", "Azerbaijan", "AS",
	"BA", "BIH", "Bosnia and Herzegovina", "EU",
	"BB", "BRB", "Barbados", "NA",
	"BD", "BGD", "Bangladesh", "AS",
	"BE", "BEL", "Belgium", "EU",
	"BF", "BFA", "Burkina Faso", "AF",
	"BG", "BGR", "Bulgaria", "EU",
	"BH", "BHR", "Bahrain", "AS",
	"BI", "BDI", "Burundi", "AF",
	"BJ", "BEN", "Benin", "AF",
	"BL", "BLM", "Saint Barthelemy", "NA",
	"BM", "BMU", "Bermuda", "NA",
	"BN", "BRN", "Brunei", "AS",
	"BO", "BOL", "Bolivia", "SA",
	"BQ", "BES", "Bonaire", "NA",
	"BR", "BRA", "Brazil", "SA",
	"BS", "BHS", "Bahamas", "NA",
	"BT", "BTN", "Bhutan", "AS",
	"BV", "BVT", "Bouvet Island", "AN",
	"BW", "BWA", "Botswana", "AF",
	"BY", "BLR", "Belarus", "EU",
	"BZ", "BLZ", "Belize", "NA",
	"CA", "CAN", "Canada", "NA",
	"CC", "CCK", "Cocos Islands", "AS",
	"CD", "COD", "Democratic Republic of the Congo", "AF",
	"CF", "CAF", "Central African Republic", "AF",
	"CG", "COG", "Republic of the Congo", "AF",
	"CH", "CHE", "Switzerland", "EU",
	"CI", "CIV", "Ivory Coast", "AF",
	"CK", "COK", "Cook Islands", "OC",
	"CL", "CHL", "Chile", "SA",
	"CM", "CMR", "Cameroon", "AF",
	"CN", "CHN", "China", "AS",
	"CO", "COL", "Colombia", "SA",
	"CR", "CRI", "Costa Rica", "NA",
	"CU", "CUB", "Cuba", "NA",
	"CV", "CPV", "Cabo Verde", "AF",
	"CW", "CUW", "Curacao", "NA",
	"CX", "CXR", "Christmas Island", "OC",
	"CY", "CYP", "Cyprus", "EU",
	"CZ", "CZE", "Czechia", "EU",
	"DE", "DEU", "Germany", "EU",
	"DJ", "DJI", "Djibouti", "AF",
	"DK", "DNK", "Denmark", "EU",
	"DM", "DMA", "Dominica", "NA",
	"DO", "DOM", "Dominican Republic", "NA",
	"DZ", "DZA", "Algeria", "AF",
	"EC", "ECU", "Ecuador", "SA",
	"EE", "EST", "Estonia", "EU",
	"EG", "EGY", "Egypt", "AF",
	"EH", "ESH", "Western Sahara", "AF",
	"ER", "ERI", "Eritrea", "AF",
	"ES", "ESP", "Spain", "EU",
	"ET", "ETH", "Ethiopia", "AF",
	"FI", "FIN", "Finland", "EU",
	"FJ", "FJI", "Fiji", "OC",
	"FK", "FLK", "Falkland Islands", "SA",
	"FM", "FSM", "Micronesia", "OC",
	"FO", "FRO", "Faroe Islands", "EU",
	"FR", "FRA", "France", "EU",
	"GA", "GAB", "Gabon", "AF",
	"GB", "GBR", "United Kingdom", "EU",
	"GD", "GRD", "Grenada", "NA",
	"GE", "GEO", "Georgia", "AS",
	"GF", "GUF", "French Guiana", "SA",
	"GG", "GGY", "Guernsey", "EU",
	"GH", "GHA", "Ghana", "AF",
	"GI", "GIB", "Gibraltar", "EU",
	"GL", "GRL", "Greenland", "NA",
	"GM", "GMB", "Gambia", "AF",
	"GN", "GIN", "Guinea", "AF",
	"GP", "GLP", "Guadeloupe", "NA",
	"GQ", "GNQ", "Equatorial Guinea", "AF",
	"GR", "GRC", "Greece", "EU",
	"GS", "SGS", "South Georgia and the South Sandwich Islands", "AN",
	"GT", "GTM", "Guatemala", "NA",
	"GU", "GUM", "Guam", "OC",
	"GW", "GNB", "Guinea-Bissau", "AF",
	"GY", "GUY", "Guyana", "SA",
	"HK", "HKG", "Hong Kong", "AS",
	"HM", "HMD", "Heard Island and McDonald Islands", "AN",
	"HN", "HND", "Honduras", "NA",
	"HR", "HRV", "Croatia", "EU",
	"HT", "HTI", "Haiti", "NA",
	"HU", "HUN", "Hungary", "EU",
	"ID", "IDN", "Indonesia", "AS",
	"IE", "IRL", "Ireland", "EU",
	"IL", "ISR", "Israel", "AS",
	"IM", "IMN", "Isle of Man", "EU",
	"IN", "IND", "India", "AS",
	"IO", "IOT", "British Indian Ocean Territory", "AS",
	"IQ", "IRQ", "Iraq", "AS",
	"IR", "IRN", "Iran", "AS",
	"IS", "ISL", "Iceland", "EU",
	"IT", "ITA", "Italy", "EU",
	"JE", "JEY", "Jersey", "EU",
	"JM", "JAM", "Jamaica", "NA",
	"JO", "JOR", "Jordan", "AS",
	"JP", "JPN", "Japan", "AS",
	"KE", "KEN", "Kenya", "AF",
	"KG", "KGZ", "Kyrgyzstan", "AS",
	"KH", "KHM", "Cambodia", "AS",
	"KI", "KIR", "Kiribati", "OC",
	"KM", "COM", "Comoros", "AF",
	"KN", "KNA", "Saint Kitts and Nevis", "NA",
	"KP", "PRK", "North Korea", "AS",
	"KR", "KOR", "South Korea", "AS",
	"XK", "XKX", "Kosovo", "EU",
	"KW", "KWT", "Kuwait", "AS",
	"KY", "CYM", "Cayman Islands", "NA",
	"KZ", "KAZ", "Kazakhstan", "AS",
	"LA", "LAO", "Laos", "AS",
	"LB", "LBN", "Lebanon", "AS",
	"LC", "LCA", "Saint Lucia", "NA",
	"LI", "LIE", "Liechtenstein", "EU",
	"LK", "LKA", "Sri Lanka", "AS",
	"LR", "LBR", "Liberia", "AF",
	"LS", "LSO", "Lesotho", "AF",
	"LT", "LTU", "Lithuania", "EU",
	"LU", "LUX", "Luxembourg", "EU",
	"LV", "LVA", "Latvia", "EU",
	"LY", "LBY", "Libya", "AF",
	"MA", "MAR", "Morocco", "AF",
	"MC", "MCO", "Monaco", "EU",
	"MD", "MDA", "Moldova", "EU",
	"ME", "MNE", "Montenegro", "EU",
	"MF", "MAF", "Saint Martin", "NA",
	"MG", "MDG", "Madagascar", "AF",
	"MH", "MHL", "Marshall Islands", "OC",
	"MK", "MKD", "North Macedonia", "EU",
	"ML", "MLI", "Mali", "AF",
	"MM", "MMR", "Myanmar", "AS",
	"MN", "MNG", "Mongolia", "AS",
	"MO", "MAC", "Macao", "AS",
	"MP", "MNP", "Northern Mariana Islands", "OC",
	"MQ", "MTQ", "Martinique", "NA",
	"MR", "MRT", "Mauritania", "AF",
	"MS", "MSR", "Montserrat", "NA",
	"MT", "MLT", "Malta", "EU",
	"MU", "MUS", "Mauritius", "AF",
	"MV", "MDV", "Maldives", "AS",
	"MW", "MWI", "Malawi", "AF",
	"MX", "MEX", "Mexico", "NA",
	"MY", "MYS", "Malaysia", "AS",
	"MZ", "MOZ", "Mozambique", "AF",
	"NA", "NAM", "Namibia", "AF",
	"NC", "NCL", "New Caledonia", "OC",
	"NE", "NER", "Niger", "AF",
	"NF", "NFK", "Norfolk Island", "OC",
	"NG", "NGA", "Nigeria", "AF",
	"NI", "NIC", "Nicaragua", "NA",
	"NL", "NLD", "Netherlands", "EU",
	"NO", "NOR", "Norway", "EU",
	"NP", "NPL", "Nepal", "AS",
	"NR", "NRU", "Nauru", "OC",
	"NU", "NIU", "Niue", "OC",
	"NZ", "NZL", "New Zealand", "OC",
	"OM", "OMN", "Oman", "AS",
	"PA", "PAN", "Panama", "NA",
	"PE", "PER", "Peru", "SA",
	"PF", "PYF", "French Polynesia", "OC",
	"PG", "PNG", "Papua New Guinea", "OC",
	"PH", "PHL", "Philippines", "AS",
	"PK", "PAK", "Pakistan", "AS",
	"PL", "POL", "Poland", "EU",
	"PM", "SPM", "Saint Pierre and Miquelon", "NA",
	"PN", "PCN", "Pitcairn", "OC",
	"PR", "PRI", "Puerto Rico", "NA",
	"PS", "PSE", "Palestinian Territory", "AS",
	"PT", "PRT", "Portugal", "EU",
	"PW", "PLW", "Palau", "OC",
	"PY", "PRY", "Paraguay", "SA",
	"QA", "QAT", "Qatar", "AS",
	"RE", "REU", "Reunion", "AF",
	"RO", "ROU", "Romania", "EU",
	"RS", "SRB", "Serbia", "EU",
	"RU", "RUS", "Russia", "EU",
	"RW", "RWA", "Rwanda", "AF",
	"SA", "SAU", "Saudi Arabia", "AS",
	"SB", "SLB", "Solomon Islands", "OC",
	"SC", "SYC", "Seychelles", "AF",
	"SD", "SDN", "Sudan", "AF",
	"SS", "SSD", "South Sudan", "AF",
	"SE", "SWE", "Sweden", "EU",
	"SG", "SGP", "Singapore", "AS",
	"SH", "SHN", "Saint Helena", "AF",
	"SI", "SVN", "Slovenia", "EU",
	"SJ", "SJM", "Svalbard and Jan Mayen", "EU",
	"SK", "SVK", "Slovakia", "EU",
	"SL", "SLE", "Sierra Leone", "AF",
	"SM", "SMR", "San Marino", "EU",
	"SN", "SEN", "Senegal", "AF",
	"SO", "SOM", "Somalia", "AF",
	"SR", "SUR", "Suriname", "SA",
	"ST", "STP", "Sao Tome and Principe", "AF",
	"SV", "SLV", "El Salvador", "NA",
	"SX", "SXM", "Sint Maarten", "NA",
	"SY", "SYR", "Syria", "AS",
	"SZ", "SWZ", "Eswatini", "AF",
	"TC", "TCA", "Turks and Caicos Islands", "NA",
	"TD", "TCD", "Chad", "AF",
	"TF", "ATF", "French Southern Territories", "AN",
	"TG", "TGO", "Togo", "AF",
	"TH", "THA", "Thailand", "AS",
	"TJ", "TJK", "Tajikistan", "AS",
	"TK", "TKL", "Tokelau", "OC",
	"TL", "TLS", "Timor Leste", "OC",
	"TM", "TKM", "Turkmenistan", "AS",
	"TN", "TUN", "Tunisia", "AF",
	"TO", "TON", "Tonga", "OC",
	"TR", "TUR", "Turkey", "AS",
	"TT", "TTO", "Trinidad and Tobago", "NA",
	"TV", "TUV", "Tuvalu", "OC",
	"TW", "TWN", "Taiwan", "AS",
	"TZ", "TZA", "Tanzania", "AF",
	"UA", "UKR", "Ukraine", "EU",
	"UG", "UGA", "Uganda", "AF",
	"UM", "UMI", "United States Minor Outlying Islands", "OC",
	"US", "USA", "United States", "NA",
	"UY", "URY", "Uruguay", "SA",
	"UZ", "UZB", "Uzbekistan", "AS",
	"VA", "VAT", "Vatican", "EU",
	"VC", "VCT", "Saint Vincent and the Grenadines", "NA",
	"VE", "VEN", "Venezuela", "SA",
	"VG", "VGB", "British Virgin Islands", "NA",
	"VI", "VIR", "U.S. Virgin Islands", "NA",
	"VN", "VNM", "Vietnam", "AS",
	"VU", "VUT", "Vanuatu", "OC",
	"WF", "WLF", "Wallis and Futuna", "OC",
	"WS", "WSM", "Samoa", "OC",
	"YE", "YEM", "Yemen", "AS",
	"YT", "MYT", "Mayotte", "AF",
	"ZA", "ZAF", "South Africa", "AF",
	"ZM", "ZMB", "Zambia", "AF",
	"ZW", "ZWE", "Zimbabwe", "AF",
	"CS", "SCG", "Serbia and Montenegro", "EU",
	"AN", "ANT", "Netherlands Antilles", "NA"
};
