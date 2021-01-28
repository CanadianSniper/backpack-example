class CfgPatches
{
	class CS_Backpack
	{
		units[]=
		{
			"backpack_g",
			"backpack_m",
			"backpack_f"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Backpacks",
			"DZ_Characters"
		};
	};
};
class CfgMods
{
	class CS_Backpack
	{	
		dir = "backpack";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "example backpack";
		author = "CanadianSniper";
		authorID = "";
		version = "1.0";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		
		class defs
		{
            class worldScriptModule
            {
                value = "";
                files[] = {"backpack/Scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class CS_Backpack: Clothing
	{
		scope=2;
		displayName="example bag";
		descriptionShort="example on how to make bags";
		model="\backpack\backpack_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=0;
		itemSize[]={4,5};
		itemsCargoSize[]={10,6};
		weight=1300;
		absorbency=0.2;
		heatIsolation=0.13;
		repairableWithKits[]={5,3};
		repairCosts[]={30,25};
		canBeDigged=1;
		soundAttType="Outdoor";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ClothingTypes
		{
			male="\backpack\backpack_m.p3d";
			female="\backpack\backpack_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\mountain.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\mountain.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\mountain_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\mountain_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\mountain_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};