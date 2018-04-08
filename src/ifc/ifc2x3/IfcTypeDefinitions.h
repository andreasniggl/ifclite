#ifndef IFC2X3_TYPE_DEFINITIONS_H_INCLUDED
#define IFC2X3_TYPE_DEFINITIONS_H_INCLUDED

#include <array>
#include <string>

namespace ifc2x3
{
   const char SCHEMA_NAME[] = "IFC2X3";

   typedef double IfcAbsorbedDoseMeasure;
   typedef double IfcAccelerationMeasure;
   typedef double IfcAmountOfSubstanceMeasure;
   typedef double IfcAngularVelocityMeasure;
   typedef double IfcAreaMeasure;
   typedef bool IfcBoolean;
   typedef std::array<double,2> IfcComplexNumber;
   typedef std::array<int,4> IfcCompoundPlaneAngleMeasure;
   typedef double IfcContextDependentMeasure;
   typedef int IfcCountMeasure;
   typedef double IfcCurvatureMeasure;
   typedef int IfcDayInMonthNumber;
   typedef int IfcDaylightSavingHour;
   typedef std::string IfcDescriptiveMeasure;
   typedef int IfcDimensionCount;
   typedef double IfcDoseEquivalentMeasure;
   typedef double IfcDynamicViscosityMeasure;
   typedef double IfcElectricCapacitanceMeasure;
   typedef double IfcElectricChargeMeasure;
   typedef double IfcElectricConductanceMeasure;
   typedef double IfcElectricCurrentMeasure;
   typedef double IfcElectricResistanceMeasure;
   typedef double IfcElectricVoltageMeasure;
   typedef double IfcEnergyMeasure;
   typedef std::string IfcFontStyle;
   typedef std::string IfcFontVariant;
   typedef std::string IfcFontWeight;
   typedef double IfcForceMeasure;
   typedef double IfcFrequencyMeasure;
   typedef std::string IfcGloballyUniqueId;
   typedef double IfcHeatFluxDensityMeasure;
   typedef double IfcHeatingValueMeasure;
   typedef int IfcHourInDay;
   typedef std::string IfcIdentifier;
   typedef double IfcIlluminanceMeasure;
   typedef double IfcInductanceMeasure;
   typedef int IfcInteger;
   typedef int IfcIntegerCountRateMeasure;
   typedef double IfcIonConcentrationMeasure;
   typedef double IfcIsothermalMoistureCapacityMeasure;
   typedef double IfcKinematicViscosityMeasure;
   typedef std::string IfcLabel;
   typedef IfcLabel IfcBoxAlignment;
   typedef double IfcLengthMeasure;
   typedef double IfcLinearForceMeasure;
   typedef double IfcLinearMomentMeasure;
   typedef double IfcLinearStiffnessMeasure;
   typedef double IfcLinearVelocityMeasure;
   typedef bool IfcLogical;
   typedef double IfcLuminousFluxMeasure;
   typedef double IfcLuminousIntensityDistributionMeasure;
   typedef double IfcLuminousIntensityMeasure;
   typedef double IfcMagneticFluxDensityMeasure;
   typedef double IfcMagneticFluxMeasure;
   typedef double IfcMassDensityMeasure;
   typedef double IfcMassFlowRateMeasure;
   typedef double IfcMassMeasure;
   typedef double IfcMassPerLengthMeasure;
   typedef int IfcMinuteInHour;
   typedef double IfcModulusOfElasticityMeasure;
   typedef double IfcModulusOfLinearSubgradeReactionMeasure;
   typedef double IfcModulusOfRotationalSubgradeReactionMeasure;
   typedef double IfcModulusOfSubgradeReactionMeasure;
   typedef double IfcMoistureDiffusivityMeasure;
   typedef double IfcMolecularWeightMeasure;
   typedef double IfcMomentOfInertiaMeasure;
   typedef double IfcMonetaryMeasure;
   typedef int IfcMonthInYearNumber;
   typedef double IfcRatioMeasure;
   typedef IfcRatioMeasure IfcNormalisedRatioMeasure;
   typedef int IfcNumericMeasure;
   typedef double IfcPHMeasure;
   typedef double IfcParameterValue;
   typedef double IfcPlanarForceMeasure;
   typedef double IfcPlaneAngleMeasure;
   typedef IfcLengthMeasure IfcPositiveLengthMeasure;
   typedef IfcPlaneAngleMeasure IfcPositivePlaneAngleMeasure;
   typedef IfcRatioMeasure IfcPositiveRatioMeasure;
   typedef double IfcPowerMeasure;
   typedef std::string IfcPresentableText;
   typedef double IfcPressureMeasure;
   typedef double IfcRadioActivityMeasure;
   typedef double IfcReal;
   typedef double IfcRotationalFrequencyMeasure;
   typedef double IfcRotationalMassMeasure;
   typedef double IfcRotationalStiffnessMeasure;
   typedef double IfcSecondInMinute;
   typedef double IfcSectionModulusMeasure;
   typedef double IfcSectionalAreaIntegralMeasure;
   typedef double IfcShearModulusMeasure;
   typedef double IfcSolidAngleMeasure;
   typedef double IfcSoundPowerMeasure;
   typedef double IfcSoundPressureMeasure;
   typedef double IfcSpecificHeatCapacityMeasure;
   typedef double IfcSpecularExponent;
   typedef double IfcSpecularRoughness;
   typedef double IfcTemperatureGradientMeasure;
   typedef std::string IfcText;
   typedef std::string IfcTextAlignment;
   typedef std::string IfcTextDecoration;
   typedef std::string IfcTextFontName;
   typedef std::string IfcTextTransformation;
   typedef double IfcThermalAdmittanceMeasure;
   typedef double IfcThermalConductivityMeasure;
   typedef double IfcThermalExpansionCoefficientMeasure;
   typedef double IfcThermalResistanceMeasure;
   typedef double IfcThermalTransmittanceMeasure;
   typedef double IfcThermodynamicTemperatureMeasure;
   typedef double IfcTimeMeasure;
   typedef int IfcTimeStamp;
   typedef double IfcTorqueMeasure;
   typedef double IfcVaporPermeabilityMeasure;
   typedef double IfcVolumeMeasure;
   typedef double IfcVolumetricFlowRateMeasure;
   typedef double IfcWarpingConstantMeasure;
   typedef double IfcWarpingMomentMeasure;
   typedef int IfcYearNumber;

   enum struct IfcActionSourceTypeEnum {
      DEAD_LOAD_G,
      COMPLETION_G1,
      LIVE_LOAD_Q,
      SNOW_S,
      WIND_W,
      PRESTRESSING_P,
      SETTLEMENT_U,
      TEMPERATURE_T,
      EARTHQUAKE_E,
      FIRE,
      IMPULSE,
      IMPACT,
      TRANSPORT,
      ERECTION,
      PROPPING,
      SYSTEM_IMPERFECTION,
      SHRINKAGE,
      CREEP,
      LACK_OF_FIT,
      BUOYANCY,
      ICE,
      CURRENT,
      WAVE,
      RAIN,
      BRAKES,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcActionSourceTypeEnumStringMap[] = {
      "DEAD_LOAD_G",
      "COMPLETION_G1",
      "LIVE_LOAD_Q",
      "SNOW_S",
      "WIND_W",
      "PRESTRESSING_P",
      "SETTLEMENT_U",
      "TEMPERATURE_T",
      "EARTHQUAKE_E",
      "FIRE",
      "IMPULSE",
      "IMPACT",
      "TRANSPORT",
      "ERECTION",
      "PROPPING",
      "SYSTEM_IMPERFECTION",
      "SHRINKAGE",
      "CREEP",
      "LACK_OF_FIT",
      "BUOYANCY",
      "ICE",
      "CURRENT",
      "WAVE",
      "RAIN",
      "BRAKES",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcActionTypeEnum {
      PERMANENT_G,
      VARIABLE_Q,
      EXTRAORDINARY_A,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcActionTypeEnumStringMap[] = {
      "PERMANENT_G",
      "VARIABLE_Q",
      "EXTRAORDINARY_A",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcActuatorTypeEnum {
      ELECTRICACTUATOR,
      HANDOPERATEDACTUATOR,
      HYDRAULICACTUATOR,
      PNEUMATICACTUATOR,
      THERMOSTATICACTUATOR,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcActuatorTypeEnumStringMap[] = {
      "ELECTRICACTUATOR",
      "HANDOPERATEDACTUATOR",
      "HYDRAULICACTUATOR",
      "PNEUMATICACTUATOR",
      "THERMOSTATICACTUATOR",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcAddressTypeEnum {
      OFFICE,
      SITE,
      HOME,
      DISTRIBUTIONPOINT,
      USERDEFINED
   };

   const char * IfcAddressTypeEnumStringMap[] = {
      "OFFICE",
      "SITE",
      "HOME",
      "DISTRIBUTIONPOINT",
      "USERDEFINED"
   };

   enum struct IfcAheadOrBehind {
      AHEAD,
      BEHIND
   };

   const char * IfcAheadOrBehindStringMap[] = {
      "AHEAD",
      "BEHIND"
   };

   enum struct IfcAirTerminalBoxTypeEnum {
      CONSTANTFLOW,
      VARIABLEFLOWPRESSUREDEPENDANT,
      VARIABLEFLOWPRESSUREINDEPENDANT,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcAirTerminalBoxTypeEnumStringMap[] = {
      "CONSTANTFLOW",
      "VARIABLEFLOWPRESSUREDEPENDANT",
      "VARIABLEFLOWPRESSUREINDEPENDANT",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcAirTerminalTypeEnum {
      GRILLE,
      REGISTER,
      DIFFUSER,
      EYEBALL,
      IRIS,
      LINEARGRILLE,
      LINEARDIFFUSER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcAirTerminalTypeEnumStringMap[] = {
      "GRILLE",
      "REGISTER",
      "DIFFUSER",
      "EYEBALL",
      "IRIS",
      "LINEARGRILLE",
      "LINEARDIFFUSER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcAirToAirHeatRecoveryTypeEnum {
      FIXEDPLATECOUNTERFLOWEXCHANGER,
      FIXEDPLATECROSSFLOWEXCHANGER,
      FIXEDPLATEPARALLELFLOWEXCHANGER,
      ROTARYWHEEL,
      RUNAROUNDCOILLOOP,
      HEATPIPE,
      TWINTOWERENTHALPYRECOVERYLOOPS,
      THERMOSIPHONSEALEDTUBEHEATEXCHANGERS,
      THERMOSIPHONCOILTYPEHEATEXCHANGERS,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcAirToAirHeatRecoveryTypeEnumStringMap[] = {
      "FIXEDPLATECOUNTERFLOWEXCHANGER",
      "FIXEDPLATECROSSFLOWEXCHANGER",
      "FIXEDPLATEPARALLELFLOWEXCHANGER",
      "ROTARYWHEEL",
      "RUNAROUNDCOILLOOP",
      "HEATPIPE",
      "TWINTOWERENTHALPYRECOVERYLOOPS",
      "THERMOSIPHONSEALEDTUBEHEATEXCHANGERS",
      "THERMOSIPHONCOILTYPEHEATEXCHANGERS",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcAlarmTypeEnum {
      BELL,
      BREAKGLASSBUTTON,
      LIGHT,
      MANUALPULLBOX,
      SIREN,
      WHISTLE,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcAlarmTypeEnumStringMap[] = {
      "BELL",
      "BREAKGLASSBUTTON",
      "LIGHT",
      "MANUALPULLBOX",
      "SIREN",
      "WHISTLE",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcAnalysisModelTypeEnum {
      IN_PLANE_LOADING_2D,
      OUT_PLANE_LOADING_2D,
      LOADING_3D,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcAnalysisModelTypeEnumStringMap[] = {
      "IN_PLANE_LOADING_2D",
      "OUT_PLANE_LOADING_2D",
      "LOADING_3D",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcAnalysisTheoryTypeEnum {
      FIRST_ORDER_THEORY,
      SECOND_ORDER_THEORY,
      THIRD_ORDER_THEORY,
      FULL_NONLINEAR_THEORY,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcAnalysisTheoryTypeEnumStringMap[] = {
      "FIRST_ORDER_THEORY",
      "SECOND_ORDER_THEORY",
      "THIRD_ORDER_THEORY",
      "FULL_NONLINEAR_THEORY",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcArithmeticOperatorEnum {
      ADD,
      DIVIDE,
      MULTIPLY,
      SUBTRACT
   };

   const char * IfcArithmeticOperatorEnumStringMap[] = {
      "ADD",
      "DIVIDE",
      "MULTIPLY",
      "SUBTRACT"
   };

   enum struct IfcAssemblyPlaceEnum {
      SITE,
      FACTORY,
      NOTDEFINED
   };

   const char * IfcAssemblyPlaceEnumStringMap[] = {
      "SITE",
      "FACTORY",
      "NOTDEFINED"
   };

   enum struct IfcBSplineCurveForm {
      POLYLINE_FORM,
      CIRCULAR_ARC,
      ELLIPTIC_ARC,
      PARABOLIC_ARC,
      HYPERBOLIC_ARC,
      UNSPECIFIED
   };

   const char * IfcBSplineCurveFormStringMap[] = {
      "POLYLINE_FORM",
      "CIRCULAR_ARC",
      "ELLIPTIC_ARC",
      "PARABOLIC_ARC",
      "HYPERBOLIC_ARC",
      "UNSPECIFIED"
   };

   enum struct IfcBeamTypeEnum {
      BEAM,
      JOIST,
      LINTEL,
      T_BEAM,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcBeamTypeEnumStringMap[] = {
      "BEAM",
      "JOIST",
      "LINTEL",
      "T_BEAM",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcBenchmarkEnum {
      GREATERTHAN,
      GREATERTHANOREQUALTO,
      LESSTHAN,
      LESSTHANOREQUALTO,
      EQUALTO,
      NOTEQUALTO
   };

   const char * IfcBenchmarkEnumStringMap[] = {
      "GREATERTHAN",
      "GREATERTHANOREQUALTO",
      "LESSTHAN",
      "LESSTHANOREQUALTO",
      "EQUALTO",
      "NOTEQUALTO"
   };

   enum struct IfcBoilerTypeEnum {
      WATER,
      STEAM,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcBoilerTypeEnumStringMap[] = {
      "WATER",
      "STEAM",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcBooleanOperator {
      UNION,
      INTERSECTION,
      DIFFERENCE
   };

   const char * IfcBooleanOperatorStringMap[] = {
      "UNION",
      "INTERSECTION",
      "DIFFERENCE"
   };

   enum struct IfcBuildingElementProxyTypeEnum {
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcBuildingElementProxyTypeEnumStringMap[] = {
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCableCarrierFittingTypeEnum {
      BEND,
      CROSS,
      REDUCER,
      TEE,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCableCarrierFittingTypeEnumStringMap[] = {
      "BEND",
      "CROSS",
      "REDUCER",
      "TEE",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCableCarrierSegmentTypeEnum {
      CABLELADDERSEGMENT,
      CABLETRAYSEGMENT,
      CABLETRUNKINGSEGMENT,
      CONDUITSEGMENT,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCableCarrierSegmentTypeEnumStringMap[] = {
      "CABLELADDERSEGMENT",
      "CABLETRAYSEGMENT",
      "CABLETRUNKINGSEGMENT",
      "CONDUITSEGMENT",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCableSegmentTypeEnum {
      CABLESEGMENT,
      CONDUCTORSEGMENT,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCableSegmentTypeEnumStringMap[] = {
      "CABLESEGMENT",
      "CONDUCTORSEGMENT",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcChangeActionEnum {
      NOCHANGE,
      MODIFIED,
      ADDED,
      DELETED,
      MODIFIEDADDED,
      MODIFIEDDELETED
   };

   const char * IfcChangeActionEnumStringMap[] = {
      "NOCHANGE",
      "MODIFIED",
      "ADDED",
      "DELETED",
      "MODIFIEDADDED",
      "MODIFIEDDELETED"
   };

   enum struct IfcChillerTypeEnum {
      AIRCOOLED,
      WATERCOOLED,
      HEATRECOVERY,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcChillerTypeEnumStringMap[] = {
      "AIRCOOLED",
      "WATERCOOLED",
      "HEATRECOVERY",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCoilTypeEnum {
      DXCOOLINGCOIL,
      WATERCOOLINGCOIL,
      STEAMHEATINGCOIL,
      WATERHEATINGCOIL,
      ELECTRICHEATINGCOIL,
      GASHEATINGCOIL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCoilTypeEnumStringMap[] = {
      "DXCOOLINGCOIL",
      "WATERCOOLINGCOIL",
      "STEAMHEATINGCOIL",
      "WATERHEATINGCOIL",
      "ELECTRICHEATINGCOIL",
      "GASHEATINGCOIL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcColumnTypeEnum {
      COLUMN,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcColumnTypeEnumStringMap[] = {
      "COLUMN",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCompressorTypeEnum {
      DYNAMIC,
      RECIPROCATING,
      ROTARY,
      SCROLL,
      TROCHOIDAL,
      SINGLESTAGE,
      BOOSTER,
      OPENTYPE,
      HERMETIC,
      SEMIHERMETIC,
      WELDEDSHELLHERMETIC,
      ROLLINGPISTON,
      ROTARYVANE,
      SINGLESCREW,
      TWINSCREW,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCompressorTypeEnumStringMap[] = {
      "DYNAMIC",
      "RECIPROCATING",
      "ROTARY",
      "SCROLL",
      "TROCHOIDAL",
      "SINGLESTAGE",
      "BOOSTER",
      "OPENTYPE",
      "HERMETIC",
      "SEMIHERMETIC",
      "WELDEDSHELLHERMETIC",
      "ROLLINGPISTON",
      "ROTARYVANE",
      "SINGLESCREW",
      "TWINSCREW",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCondenserTypeEnum {
      WATERCOOLEDSHELLTUBE,
      WATERCOOLEDSHELLCOIL,
      WATERCOOLEDTUBEINTUBE,
      WATERCOOLEDBRAZEDPLATE,
      AIRCOOLED,
      EVAPORATIVECOOLED,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCondenserTypeEnumStringMap[] = {
      "WATERCOOLEDSHELLTUBE",
      "WATERCOOLEDSHELLCOIL",
      "WATERCOOLEDTUBEINTUBE",
      "WATERCOOLEDBRAZEDPLATE",
      "AIRCOOLED",
      "EVAPORATIVECOOLED",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcConnectionTypeEnum {
      ATPATH,
      ATSTART,
      ATEND,
      NOTDEFINED
   };

   const char * IfcConnectionTypeEnumStringMap[] = {
      "ATPATH",
      "ATSTART",
      "ATEND",
      "NOTDEFINED"
   };

   enum struct IfcConstraintEnum {
      HARD,
      SOFT,
      ADVISORY,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcConstraintEnumStringMap[] = {
      "HARD",
      "SOFT",
      "ADVISORY",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcControllerTypeEnum {
      FLOATING,
      PROPORTIONAL,
      PROPORTIONALINTEGRAL,
      PROPORTIONALINTEGRALDERIVATIVE,
      TIMEDTWOPOSITION,
      TWOPOSITION,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcControllerTypeEnumStringMap[] = {
      "FLOATING",
      "PROPORTIONAL",
      "PROPORTIONALINTEGRAL",
      "PROPORTIONALINTEGRALDERIVATIVE",
      "TIMEDTWOPOSITION",
      "TWOPOSITION",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCooledBeamTypeEnum {
      ACTIVE,
      PASSIVE,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCooledBeamTypeEnumStringMap[] = {
      "ACTIVE",
      "PASSIVE",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCoolingTowerTypeEnum {
      NATURALDRAFT,
      MECHANICALINDUCEDDRAFT,
      MECHANICALFORCEDDRAFT,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCoolingTowerTypeEnumStringMap[] = {
      "NATURALDRAFT",
      "MECHANICALINDUCEDDRAFT",
      "MECHANICALFORCEDDRAFT",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCostScheduleTypeEnum {
      BUDGET,
      COSTPLAN,
      ESTIMATE,
      TENDER,
      PRICEDBILLOFQUANTITIES,
      UNPRICEDBILLOFQUANTITIES,
      SCHEDULEOFRATES,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCostScheduleTypeEnumStringMap[] = {
      "BUDGET",
      "COSTPLAN",
      "ESTIMATE",
      "TENDER",
      "PRICEDBILLOFQUANTITIES",
      "UNPRICEDBILLOFQUANTITIES",
      "SCHEDULEOFRATES",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCoveringTypeEnum {
      CEILING,
      FLOORING,
      CLADDING,
      ROOFING,
      INSULATION,
      MEMBRANE,
      SLEEVING,
      WRAPPING,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCoveringTypeEnumStringMap[] = {
      "CEILING",
      "FLOORING",
      "CLADDING",
      "ROOFING",
      "INSULATION",
      "MEMBRANE",
      "SLEEVING",
      "WRAPPING",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcCurrencyEnum {
      AED,
      AES,
      ATS,
      AUD,
      BBD,
      BEG,
      BGL,
      BHD,
      BMD,
      BND,
      BRL,
      BSD,
      BWP,
      BZD,
      CAD,
      CBD,
      CHF,
      CLP,
      CNY,
      CYS,
      CZK,
      DDP,
      DEM,
      DKK,
      EGL,
      EST,
      EUR,
      FAK,
      FIM,
      FJD,
      FKP,
      FRF,
      GBP,
      GIP,
      GMD,
      GRX,
      HKD,
      HUF,
      ICK,
      IDR,
      ILS,
      INR,
      IRP,
      ITL,
      JMD,
      JOD,
      JPY,
      KES,
      KRW,
      KWD,
      KYD,
      LKR,
      LUF,
      MTL,
      MUR,
      MXN,
      MYR,
      NLG,
      NZD,
      OMR,
      PGK,
      PHP,
      PKR,
      PLN,
      PTN,
      QAR,
      RUR,
      SAR,
      SCR,
      SEK,
      SGD,
      SKP,
      THB,
      TRL,
      TTD,
      TWD,
      USD,
      VEB,
      VND,
      XEU,
      ZAR,
      ZWD,
      NOK
   };

   const char * IfcCurrencyEnumStringMap[] = {
      "AED",
      "AES",
      "ATS",
      "AUD",
      "BBD",
      "BEG",
      "BGL",
      "BHD",
      "BMD",
      "BND",
      "BRL",
      "BSD",
      "BWP",
      "BZD",
      "CAD",
      "CBD",
      "CHF",
      "CLP",
      "CNY",
      "CYS",
      "CZK",
      "DDP",
      "DEM",
      "DKK",
      "EGL",
      "EST",
      "EUR",
      "FAK",
      "FIM",
      "FJD",
      "FKP",
      "FRF",
      "GBP",
      "GIP",
      "GMD",
      "GRX",
      "HKD",
      "HUF",
      "ICK",
      "IDR",
      "ILS",
      "INR",
      "IRP",
      "ITL",
      "JMD",
      "JOD",
      "JPY",
      "KES",
      "KRW",
      "KWD",
      "KYD",
      "LKR",
      "LUF",
      "MTL",
      "MUR",
      "MXN",
      "MYR",
      "NLG",
      "NZD",
      "OMR",
      "PGK",
      "PHP",
      "PKR",
      "PLN",
      "PTN",
      "QAR",
      "RUR",
      "SAR",
      "SCR",
      "SEK",
      "SGD",
      "SKP",
      "THB",
      "TRL",
      "TTD",
      "TWD",
      "USD",
      "VEB",
      "VND",
      "XEU",
      "ZAR",
      "ZWD",
      "NOK"
   };

   enum struct IfcCurtainWallTypeEnum {
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcCurtainWallTypeEnumStringMap[] = {
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcDamperTypeEnum {
      CONTROLDAMPER,
      FIREDAMPER,
      SMOKEDAMPER,
      FIRESMOKEDAMPER,
      BACKDRAFTDAMPER,
      RELIEFDAMPER,
      BLASTDAMPER,
      GRAVITYDAMPER,
      GRAVITYRELIEFDAMPER,
      BALANCINGDAMPER,
      FUMEHOODEXHAUST,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcDamperTypeEnumStringMap[] = {
      "CONTROLDAMPER",
      "FIREDAMPER",
      "SMOKEDAMPER",
      "FIRESMOKEDAMPER",
      "BACKDRAFTDAMPER",
      "RELIEFDAMPER",
      "BLASTDAMPER",
      "GRAVITYDAMPER",
      "GRAVITYRELIEFDAMPER",
      "BALANCINGDAMPER",
      "FUMEHOODEXHAUST",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcDataOriginEnum {
      MEASURED,
      PREDICTED,
      SIMULATED,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcDataOriginEnumStringMap[] = {
      "MEASURED",
      "PREDICTED",
      "SIMULATED",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcDerivedUnitEnum {
      ANGULARVELOCITYUNIT,
      COMPOUNDPLANEANGLEUNIT,
      DYNAMICVISCOSITYUNIT,
      HEATFLUXDENSITYUNIT,
      INTEGERCOUNTRATEUNIT,
      ISOTHERMALMOISTURECAPACITYUNIT,
      KINEMATICVISCOSITYUNIT,
      LINEARVELOCITYUNIT,
      MASSDENSITYUNIT,
      MASSFLOWRATEUNIT,
      MOISTUREDIFFUSIVITYUNIT,
      MOLECULARWEIGHTUNIT,
      SPECIFICHEATCAPACITYUNIT,
      THERMALADMITTANCEUNIT,
      THERMALCONDUCTANCEUNIT,
      THERMALRESISTANCEUNIT,
      THERMALTRANSMITTANCEUNIT,
      VAPORPERMEABILITYUNIT,
      VOLUMETRICFLOWRATEUNIT,
      ROTATIONALFREQUENCYUNIT,
      TORQUEUNIT,
      MOMENTOFINERTIAUNIT,
      LINEARMOMENTUNIT,
      LINEARFORCEUNIT,
      PLANARFORCEUNIT,
      MODULUSOFELASTICITYUNIT,
      SHEARMODULUSUNIT,
      LINEARSTIFFNESSUNIT,
      ROTATIONALSTIFFNESSUNIT,
      MODULUSOFSUBGRADEREACTIONUNIT,
      ACCELERATIONUNIT,
      CURVATUREUNIT,
      HEATINGVALUEUNIT,
      IONCONCENTRATIONUNIT,
      LUMINOUSINTENSITYDISTRIBUTIONUNIT,
      MASSPERLENGTHUNIT,
      MODULUSOFLINEARSUBGRADEREACTIONUNIT,
      MODULUSOFROTATIONALSUBGRADEREACTIONUNIT,
      PHUNIT,
      ROTATIONALMASSUNIT,
      SECTIONAREAINTEGRALUNIT,
      SECTIONMODULUSUNIT,
      SOUNDPOWERUNIT,
      SOUNDPRESSUREUNIT,
      TEMPERATUREGRADIENTUNIT,
      THERMALEXPANSIONCOEFFICIENTUNIT,
      WARPINGCONSTANTUNIT,
      WARPINGMOMENTUNIT,
      USERDEFINED
   };

   const char * IfcDerivedUnitEnumStringMap[] = {
      "ANGULARVELOCITYUNIT",
      "COMPOUNDPLANEANGLEUNIT",
      "DYNAMICVISCOSITYUNIT",
      "HEATFLUXDENSITYUNIT",
      "INTEGERCOUNTRATEUNIT",
      "ISOTHERMALMOISTURECAPACITYUNIT",
      "KINEMATICVISCOSITYUNIT",
      "LINEARVELOCITYUNIT",
      "MASSDENSITYUNIT",
      "MASSFLOWRATEUNIT",
      "MOISTUREDIFFUSIVITYUNIT",
      "MOLECULARWEIGHTUNIT",
      "SPECIFICHEATCAPACITYUNIT",
      "THERMALADMITTANCEUNIT",
      "THERMALCONDUCTANCEUNIT",
      "THERMALRESISTANCEUNIT",
      "THERMALTRANSMITTANCEUNIT",
      "VAPORPERMEABILITYUNIT",
      "VOLUMETRICFLOWRATEUNIT",
      "ROTATIONALFREQUENCYUNIT",
      "TORQUEUNIT",
      "MOMENTOFINERTIAUNIT",
      "LINEARMOMENTUNIT",
      "LINEARFORCEUNIT",
      "PLANARFORCEUNIT",
      "MODULUSOFELASTICITYUNIT",
      "SHEARMODULUSUNIT",
      "LINEARSTIFFNESSUNIT",
      "ROTATIONALSTIFFNESSUNIT",
      "MODULUSOFSUBGRADEREACTIONUNIT",
      "ACCELERATIONUNIT",
      "CURVATUREUNIT",
      "HEATINGVALUEUNIT",
      "IONCONCENTRATIONUNIT",
      "LUMINOUSINTENSITYDISTRIBUTIONUNIT",
      "MASSPERLENGTHUNIT",
      "MODULUSOFLINEARSUBGRADEREACTIONUNIT",
      "MODULUSOFROTATIONALSUBGRADEREACTIONUNIT",
      "PHUNIT",
      "ROTATIONALMASSUNIT",
      "SECTIONAREAINTEGRALUNIT",
      "SECTIONMODULUSUNIT",
      "SOUNDPOWERUNIT",
      "SOUNDPRESSUREUNIT",
      "TEMPERATUREGRADIENTUNIT",
      "THERMALEXPANSIONCOEFFICIENTUNIT",
      "WARPINGCONSTANTUNIT",
      "WARPINGMOMENTUNIT",
      "USERDEFINED"
   };

   enum struct IfcDimensionExtentUsage {
      ORIGIN,
      TARGET
   };

   const char * IfcDimensionExtentUsageStringMap[] = {
      "ORIGIN",
      "TARGET"
   };

   enum struct IfcDirectionSenseEnum {
      POSITIVE,
      NEGATIVE
   };

   const char * IfcDirectionSenseEnumStringMap[] = {
      "POSITIVE",
      "NEGATIVE"
   };

   enum struct IfcDistributionChamberElementTypeEnum {
      FORMEDDUCT,
      INSPECTIONCHAMBER,
      INSPECTIONPIT,
      MANHOLE,
      METERCHAMBER,
      SUMP,
      TRENCH,
      VALVECHAMBER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcDistributionChamberElementTypeEnumStringMap[] = {
      "FORMEDDUCT",
      "INSPECTIONCHAMBER",
      "INSPECTIONPIT",
      "MANHOLE",
      "METERCHAMBER",
      "SUMP",
      "TRENCH",
      "VALVECHAMBER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcDocumentConfidentialityEnum {
      PUBLIC,
      RESTRICTED,
      CONFIDENTIAL,
      PERSONAL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcDocumentConfidentialityEnumStringMap[] = {
      "PUBLIC",
      "RESTRICTED",
      "CONFIDENTIAL",
      "PERSONAL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcDocumentStatusEnum {
      DRAFT,
      FINALDRAFT,
      FINAL,
      REVISION,
      NOTDEFINED
   };

   const char * IfcDocumentStatusEnumStringMap[] = {
      "DRAFT",
      "FINALDRAFT",
      "FINAL",
      "REVISION",
      "NOTDEFINED"
   };

   enum struct IfcDoorPanelOperationEnum {
      SWINGING,
      DOUBLE_ACTING,
      SLIDING,
      FOLDING,
      REVOLVING,
      ROLLINGUP,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcDoorPanelOperationEnumStringMap[] = {
      "SWINGING",
      "DOUBLE_ACTING",
      "SLIDING",
      "FOLDING",
      "REVOLVING",
      "ROLLINGUP",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcDoorPanelPositionEnum {
      LEFT,
      MIDDLE,
      RIGHT,
      NOTDEFINED
   };

   const char * IfcDoorPanelPositionEnumStringMap[] = {
      "LEFT",
      "MIDDLE",
      "RIGHT",
      "NOTDEFINED"
   };

   enum struct IfcDoorStyleConstructionEnum {
      ALUMINIUM,
      HIGH_GRADE_STEEL,
      STEEL,
      WOOD,
      ALUMINIUM_WOOD,
      ALUMINIUM_PLASTIC,
      PLASTIC,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcDoorStyleConstructionEnumStringMap[] = {
      "ALUMINIUM",
      "HIGH_GRADE_STEEL",
      "STEEL",
      "WOOD",
      "ALUMINIUM_WOOD",
      "ALUMINIUM_PLASTIC",
      "PLASTIC",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcDoorStyleOperationEnum {
      SINGLE_SWING_LEFT,
      SINGLE_SWING_RIGHT,
      DOUBLE_DOOR_SINGLE_SWING,
      DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT,
      DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT,
      DOUBLE_SWING_LEFT,
      DOUBLE_SWING_RIGHT,
      DOUBLE_DOOR_DOUBLE_SWING,
      SLIDING_TO_LEFT,
      SLIDING_TO_RIGHT,
      DOUBLE_DOOR_SLIDING,
      FOLDING_TO_LEFT,
      FOLDING_TO_RIGHT,
      DOUBLE_DOOR_FOLDING,
      REVOLVING,
      ROLLINGUP,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcDoorStyleOperationEnumStringMap[] = {
      "SINGLE_SWING_LEFT",
      "SINGLE_SWING_RIGHT",
      "DOUBLE_DOOR_SINGLE_SWING",
      "DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT",
      "DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT",
      "DOUBLE_SWING_LEFT",
      "DOUBLE_SWING_RIGHT",
      "DOUBLE_DOOR_DOUBLE_SWING",
      "SLIDING_TO_LEFT",
      "SLIDING_TO_RIGHT",
      "DOUBLE_DOOR_SLIDING",
      "FOLDING_TO_LEFT",
      "FOLDING_TO_RIGHT",
      "DOUBLE_DOOR_FOLDING",
      "REVOLVING",
      "ROLLINGUP",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcDuctFittingTypeEnum {
      BEND,
      CONNECTOR,
      ENTRY,
      EXIT,
      JUNCTION,
      OBSTRUCTION,
      TRANSITION,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcDuctFittingTypeEnumStringMap[] = {
      "BEND",
      "CONNECTOR",
      "ENTRY",
      "EXIT",
      "JUNCTION",
      "OBSTRUCTION",
      "TRANSITION",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcDuctSegmentTypeEnum {
      RIGIDSEGMENT,
      FLEXIBLESEGMENT,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcDuctSegmentTypeEnumStringMap[] = {
      "RIGIDSEGMENT",
      "FLEXIBLESEGMENT",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcDuctSilencerTypeEnum {
      FLATOVAL,
      RECTANGULAR,
      ROUND,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcDuctSilencerTypeEnumStringMap[] = {
      "FLATOVAL",
      "RECTANGULAR",
      "ROUND",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcElectricApplianceTypeEnum {
      COMPUTER,
      DIRECTWATERHEATER,
      DISHWASHER,
      ELECTRICCOOKER,
      ELECTRICHEATER,
      FACSIMILE,
      FREESTANDINGFAN,
      FREEZER,
      FRIDGE_FREEZER,
      HANDDRYER,
      INDIRECTWATERHEATER,
      MICROWAVE,
      PHOTOCOPIER,
      PRINTER,
      REFRIGERATOR,
      RADIANTHEATER,
      SCANNER,
      TELEPHONE,
      TUMBLEDRYER,
      TV,
      VENDINGMACHINE,
      WASHINGMACHINE,
      WATERHEATER,
      WATERCOOLER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcElectricApplianceTypeEnumStringMap[] = {
      "COMPUTER",
      "DIRECTWATERHEATER",
      "DISHWASHER",
      "ELECTRICCOOKER",
      "ELECTRICHEATER",
      "FACSIMILE",
      "FREESTANDINGFAN",
      "FREEZER",
      "FRIDGE_FREEZER",
      "HANDDRYER",
      "INDIRECTWATERHEATER",
      "MICROWAVE",
      "PHOTOCOPIER",
      "PRINTER",
      "REFRIGERATOR",
      "RADIANTHEATER",
      "SCANNER",
      "TELEPHONE",
      "TUMBLEDRYER",
      "TV",
      "VENDINGMACHINE",
      "WASHINGMACHINE",
      "WATERHEATER",
      "WATERCOOLER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcElectricCurrentEnum {
      ALTERNATING,
      DIRECT,
      NOTDEFINED
   };

   const char * IfcElectricCurrentEnumStringMap[] = {
      "ALTERNATING",
      "DIRECT",
      "NOTDEFINED"
   };

   enum struct IfcElectricDistributionPointFunctionEnum {
      ALARMPANEL,
      CONSUMERUNIT,
      CONTROLPANEL,
      DISTRIBUTIONBOARD,
      GASDETECTORPANEL,
      INDICATORPANEL,
      MIMICPANEL,
      MOTORCONTROLCENTRE,
      SWITCHBOARD,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcElectricDistributionPointFunctionEnumStringMap[] = {
      "ALARMPANEL",
      "CONSUMERUNIT",
      "CONTROLPANEL",
      "DISTRIBUTIONBOARD",
      "GASDETECTORPANEL",
      "INDICATORPANEL",
      "MIMICPANEL",
      "MOTORCONTROLCENTRE",
      "SWITCHBOARD",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcElectricFlowStorageDeviceTypeEnum {
      BATTERY,
      CAPACITORBANK,
      HARMONICFILTER,
      INDUCTORBANK,
      UPS,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcElectricFlowStorageDeviceTypeEnumStringMap[] = {
      "BATTERY",
      "CAPACITORBANK",
      "HARMONICFILTER",
      "INDUCTORBANK",
      "UPS",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcElectricGeneratorTypeEnum {
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcElectricGeneratorTypeEnumStringMap[] = {
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcElectricHeaterTypeEnum {
      ELECTRICPOINTHEATER,
      ELECTRICCABLEHEATER,
      ELECTRICMATHEATER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcElectricHeaterTypeEnumStringMap[] = {
      "ELECTRICPOINTHEATER",
      "ELECTRICCABLEHEATER",
      "ELECTRICMATHEATER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcElectricMotorTypeEnum {
      DC,
      INDUCTION,
      POLYPHASE,
      RELUCTANCESYNCHRONOUS,
      SYNCHRONOUS,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcElectricMotorTypeEnumStringMap[] = {
      "DC",
      "INDUCTION",
      "POLYPHASE",
      "RELUCTANCESYNCHRONOUS",
      "SYNCHRONOUS",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcElectricTimeControlTypeEnum {
      TIMECLOCK,
      TIMEDELAY,
      RELAY,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcElectricTimeControlTypeEnumStringMap[] = {
      "TIMECLOCK",
      "TIMEDELAY",
      "RELAY",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcElementAssemblyTypeEnum {
      ACCESSORY_ASSEMBLY,
      ARCH,
      BEAM_GRID,
      BRACED_FRAME,
      GIRDER,
      REINFORCEMENT_UNIT,
      RIGID_FRAME,
      SLAB_FIELD,
      TRUSS,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcElementAssemblyTypeEnumStringMap[] = {
      "ACCESSORY_ASSEMBLY",
      "ARCH",
      "BEAM_GRID",
      "BRACED_FRAME",
      "GIRDER",
      "REINFORCEMENT_UNIT",
      "RIGID_FRAME",
      "SLAB_FIELD",
      "TRUSS",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcElementCompositionEnum {
      COMPLEX,
      ELEMENT,
      PARTIAL
   };

   const char * IfcElementCompositionEnumStringMap[] = {
      "COMPLEX",
      "ELEMENT",
      "PARTIAL"
   };

   enum struct IfcEnergySequenceEnum {
      PRIMARY,
      SECONDARY,
      TERTIARY,
      AUXILIARY,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcEnergySequenceEnumStringMap[] = {
      "PRIMARY",
      "SECONDARY",
      "TERTIARY",
      "AUXILIARY",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcEnvironmentalImpactCategoryEnum {
      COMBINEDVALUE,
      DISPOSAL,
      EXTRACTION,
      INSTALLATION,
      MANUFACTURE,
      TRANSPORTATION,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcEnvironmentalImpactCategoryEnumStringMap[] = {
      "COMBINEDVALUE",
      "DISPOSAL",
      "EXTRACTION",
      "INSTALLATION",
      "MANUFACTURE",
      "TRANSPORTATION",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcEvaporativeCoolerTypeEnum {
      DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER,
      DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER,
      DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER,
      DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER,
      DIRECTEVAPORATIVEAIRWASHER,
      INDIRECTEVAPORATIVEPACKAGEAIRCOOLER,
      INDIRECTEVAPORATIVEWETCOIL,
      INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER,
      INDIRECTDIRECTCOMBINATION,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcEvaporativeCoolerTypeEnumStringMap[] = {
      "DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER",
      "DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER",
      "DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER",
      "DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER",
      "DIRECTEVAPORATIVEAIRWASHER",
      "INDIRECTEVAPORATIVEPACKAGEAIRCOOLER",
      "INDIRECTEVAPORATIVEWETCOIL",
      "INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER",
      "INDIRECTDIRECTCOMBINATION",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcEvaporatorTypeEnum {
      DIRECTEXPANSIONSHELLANDTUBE,
      DIRECTEXPANSIONTUBEINTUBE,
      DIRECTEXPANSIONBRAZEDPLATE,
      FLOODEDSHELLANDTUBE,
      SHELLANDCOIL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcEvaporatorTypeEnumStringMap[] = {
      "DIRECTEXPANSIONSHELLANDTUBE",
      "DIRECTEXPANSIONTUBEINTUBE",
      "DIRECTEXPANSIONBRAZEDPLATE",
      "FLOODEDSHELLANDTUBE",
      "SHELLANDCOIL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcFanTypeEnum {
      CENTRIFUGALFORWARDCURVED,
      CENTRIFUGALRADIAL,
      CENTRIFUGALBACKWARDINCLINEDCURVED,
      CENTRIFUGALAIRFOIL,
      TUBEAXIAL,
      VANEAXIAL,
      PROPELLORAXIAL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcFanTypeEnumStringMap[] = {
      "CENTRIFUGALFORWARDCURVED",
      "CENTRIFUGALRADIAL",
      "CENTRIFUGALBACKWARDINCLINEDCURVED",
      "CENTRIFUGALAIRFOIL",
      "TUBEAXIAL",
      "VANEAXIAL",
      "PROPELLORAXIAL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcFilterTypeEnum {
      AIRPARTICLEFILTER,
      ODORFILTER,
      OILFILTER,
      STRAINER,
      WATERFILTER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcFilterTypeEnumStringMap[] = {
      "AIRPARTICLEFILTER",
      "ODORFILTER",
      "OILFILTER",
      "STRAINER",
      "WATERFILTER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcFireSuppressionTerminalTypeEnum {
      BREECHINGINLET,
      FIREHYDRANT,
      HOSEREEL,
      SPRINKLER,
      SPRINKLERDEFLECTOR,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcFireSuppressionTerminalTypeEnumStringMap[] = {
      "BREECHINGINLET",
      "FIREHYDRANT",
      "HOSEREEL",
      "SPRINKLER",
      "SPRINKLERDEFLECTOR",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcFlowDirectionEnum {
      SOURCE,
      SINK,
      SOURCEANDSINK,
      NOTDEFINED
   };

   const char * IfcFlowDirectionEnumStringMap[] = {
      "SOURCE",
      "SINK",
      "SOURCEANDSINK",
      "NOTDEFINED"
   };

   enum struct IfcFlowInstrumentTypeEnum {
      PRESSUREGAUGE,
      THERMOMETER,
      AMMETER,
      FREQUENCYMETER,
      POWERFACTORMETER,
      PHASEANGLEMETER,
      VOLTMETER_PEAK,
      VOLTMETER_RMS,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcFlowInstrumentTypeEnumStringMap[] = {
      "PRESSUREGAUGE",
      "THERMOMETER",
      "AMMETER",
      "FREQUENCYMETER",
      "POWERFACTORMETER",
      "PHASEANGLEMETER",
      "VOLTMETER_PEAK",
      "VOLTMETER_RMS",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcFlowMeterTypeEnum {
      ELECTRICMETER,
      ENERGYMETER,
      FLOWMETER,
      GASMETER,
      OILMETER,
      WATERMETER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcFlowMeterTypeEnumStringMap[] = {
      "ELECTRICMETER",
      "ENERGYMETER",
      "FLOWMETER",
      "GASMETER",
      "OILMETER",
      "WATERMETER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcFootingTypeEnum {
      FOOTING_BEAM,
      PAD_FOOTING,
      PILE_CAP,
      STRIP_FOOTING,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcFootingTypeEnumStringMap[] = {
      "FOOTING_BEAM",
      "PAD_FOOTING",
      "PILE_CAP",
      "STRIP_FOOTING",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcGasTerminalTypeEnum {
      GASAPPLIANCE,
      GASBOOSTER,
      GASBURNER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcGasTerminalTypeEnumStringMap[] = {
      "GASAPPLIANCE",
      "GASBOOSTER",
      "GASBURNER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcGeometricProjectionEnum {
      GRAPH_VIEW,
      SKETCH_VIEW,
      MODEL_VIEW,
      PLAN_VIEW,
      REFLECTED_PLAN_VIEW,
      SECTION_VIEW,
      ELEVATION_VIEW,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcGeometricProjectionEnumStringMap[] = {
      "GRAPH_VIEW",
      "SKETCH_VIEW",
      "MODEL_VIEW",
      "PLAN_VIEW",
      "REFLECTED_PLAN_VIEW",
      "SECTION_VIEW",
      "ELEVATION_VIEW",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcGlobalOrLocalEnum {
      GLOBAL_COORDS,
      LOCAL_COORDS
   };

   const char * IfcGlobalOrLocalEnumStringMap[] = {
      "GLOBAL_COORDS",
      "LOCAL_COORDS"
   };

   enum struct IfcHeatExchangerTypeEnum {
      PLATE,
      SHELLANDTUBE,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcHeatExchangerTypeEnumStringMap[] = {
      "PLATE",
      "SHELLANDTUBE",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcHumidifierTypeEnum {
      STEAMINJECTION,
      ADIABATICAIRWASHER,
      ADIABATICPAN,
      ADIABATICWETTEDELEMENT,
      ADIABATICATOMIZING,
      ADIABATICULTRASONIC,
      ADIABATICRIGIDMEDIA,
      ADIABATICCOMPRESSEDAIRNOZZLE,
      ASSISTEDELECTRIC,
      ASSISTEDNATURALGAS,
      ASSISTEDPROPANE,
      ASSISTEDBUTANE,
      ASSISTEDSTEAM,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcHumidifierTypeEnumStringMap[] = {
      "STEAMINJECTION",
      "ADIABATICAIRWASHER",
      "ADIABATICPAN",
      "ADIABATICWETTEDELEMENT",
      "ADIABATICATOMIZING",
      "ADIABATICULTRASONIC",
      "ADIABATICRIGIDMEDIA",
      "ADIABATICCOMPRESSEDAIRNOZZLE",
      "ASSISTEDELECTRIC",
      "ASSISTEDNATURALGAS",
      "ASSISTEDPROPANE",
      "ASSISTEDBUTANE",
      "ASSISTEDSTEAM",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcInternalOrExternalEnum {
      INTERNAL,
      EXTERNAL,
      NOTDEFINED
   };

   const char * IfcInternalOrExternalEnumStringMap[] = {
      "INTERNAL",
      "EXTERNAL",
      "NOTDEFINED"
   };

   enum struct IfcInventoryTypeEnum {
      ASSETINVENTORY,
      SPACEINVENTORY,
      FURNITUREINVENTORY,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcInventoryTypeEnumStringMap[] = {
      "ASSETINVENTORY",
      "SPACEINVENTORY",
      "FURNITUREINVENTORY",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcJunctionBoxTypeEnum {
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcJunctionBoxTypeEnumStringMap[] = {
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcLampTypeEnum {
      COMPACTFLUORESCENT,
      FLUORESCENT,
      HIGHPRESSUREMERCURY,
      HIGHPRESSURESODIUM,
      METALHALIDE,
      TUNGSTENFILAMENT,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcLampTypeEnumStringMap[] = {
      "COMPACTFLUORESCENT",
      "FLUORESCENT",
      "HIGHPRESSUREMERCURY",
      "HIGHPRESSURESODIUM",
      "METALHALIDE",
      "TUNGSTENFILAMENT",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcLayerSetDirectionEnum {
      AXIS1,
      AXIS2,
      AXIS3
   };

   const char * IfcLayerSetDirectionEnumStringMap[] = {
      "AXIS1",
      "AXIS2",
      "AXIS3"
   };

   enum struct IfcLightDistributionCurveEnum {
      TYPE_A,
      TYPE_B,
      TYPE_C,
      NOTDEFINED
   };

   const char * IfcLightDistributionCurveEnumStringMap[] = {
      "TYPE_A",
      "TYPE_B",
      "TYPE_C",
      "NOTDEFINED"
   };

   enum struct IfcLightEmissionSourceEnum {
      COMPACTFLUORESCENT,
      FLUORESCENT,
      HIGHPRESSUREMERCURY,
      HIGHPRESSURESODIUM,
      LIGHTEMITTINGDIODE,
      LOWPRESSURESODIUM,
      LOWVOLTAGEHALOGEN,
      MAINVOLTAGEHALOGEN,
      METALHALIDE,
      TUNGSTENFILAMENT,
      NOTDEFINED
   };

   const char * IfcLightEmissionSourceEnumStringMap[] = {
      "COMPACTFLUORESCENT",
      "FLUORESCENT",
      "HIGHPRESSUREMERCURY",
      "HIGHPRESSURESODIUM",
      "LIGHTEMITTINGDIODE",
      "LOWPRESSURESODIUM",
      "LOWVOLTAGEHALOGEN",
      "MAINVOLTAGEHALOGEN",
      "METALHALIDE",
      "TUNGSTENFILAMENT",
      "NOTDEFINED"
   };

   enum struct IfcLightFixtureTypeEnum {
      POINTSOURCE,
      DIRECTIONSOURCE,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcLightFixtureTypeEnumStringMap[] = {
      "POINTSOURCE",
      "DIRECTIONSOURCE",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcLoadGroupTypeEnum {
      LOAD_GROUP,
      LOAD_CASE,
      LOAD_COMBINATION_GROUP,
      LOAD_COMBINATION,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcLoadGroupTypeEnumStringMap[] = {
      "LOAD_GROUP",
      "LOAD_CASE",
      "LOAD_COMBINATION_GROUP",
      "LOAD_COMBINATION",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcLogicalOperatorEnum {
      LOGICALAND,
      LOGICALOR
   };

   const char * IfcLogicalOperatorEnumStringMap[] = {
      "LOGICALAND",
      "LOGICALOR"
   };

   enum struct IfcMemberTypeEnum {
      BRACE,
      CHORD,
      COLLAR,
      MEMBER,
      MULLION,
      PLATE,
      POST,
      PURLIN,
      RAFTER,
      STRINGER,
      STRUT,
      STUD,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcMemberTypeEnumStringMap[] = {
      "BRACE",
      "CHORD",
      "COLLAR",
      "MEMBER",
      "MULLION",
      "PLATE",
      "POST",
      "PURLIN",
      "RAFTER",
      "STRINGER",
      "STRUT",
      "STUD",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcMotorConnectionTypeEnum {
      BELTDRIVE,
      COUPLING,
      DIRECTDRIVE,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcMotorConnectionTypeEnumStringMap[] = {
      "BELTDRIVE",
      "COUPLING",
      "DIRECTDRIVE",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcNullStyle {
      NULLVALUE
   };

   const char * IfcNullStyleStringMap[] = {
      "NULLVALUE"
   };

   enum struct IfcObjectTypeEnum {
      PRODUCT,
      PROCESS,
      CONTROL,
      RESOURCE,
      ACTOR,
      GROUP,
      PROJECT,
      NOTDEFINED
   };

   const char * IfcObjectTypeEnumStringMap[] = {
      "PRODUCT",
      "PROCESS",
      "CONTROL",
      "RESOURCE",
      "ACTOR",
      "GROUP",
      "PROJECT",
      "NOTDEFINED"
   };

   enum struct IfcObjectiveEnum {
      CODECOMPLIANCE,
      DESIGNINTENT,
      HEALTHANDSAFETY,
      REQUIREMENT,
      SPECIFICATION,
      TRIGGERCONDITION,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcObjectiveEnumStringMap[] = {
      "CODECOMPLIANCE",
      "DESIGNINTENT",
      "HEALTHANDSAFETY",
      "REQUIREMENT",
      "SPECIFICATION",
      "TRIGGERCONDITION",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcOccupantTypeEnum {
      ASSIGNEE,
      ASSIGNOR,
      LESSEE,
      LESSOR,
      LETTINGAGENT,
      OWNER,
      TENANT,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcOccupantTypeEnumStringMap[] = {
      "ASSIGNEE",
      "ASSIGNOR",
      "LESSEE",
      "LESSOR",
      "LETTINGAGENT",
      "OWNER",
      "TENANT",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcOutletTypeEnum {
      AUDIOVISUALOUTLET,
      COMMUNICATIONSOUTLET,
      POWEROUTLET,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcOutletTypeEnumStringMap[] = {
      "AUDIOVISUALOUTLET",
      "COMMUNICATIONSOUTLET",
      "POWEROUTLET",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcPermeableCoveringOperationEnum {
      GRILL,
      LOUVER,
      SCREEN,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcPermeableCoveringOperationEnumStringMap[] = {
      "GRILL",
      "LOUVER",
      "SCREEN",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcPhysicalOrVirtualEnum {
      PHYSICAL,
      VIRTUAL,
      NOTDEFINED
   };

   const char * IfcPhysicalOrVirtualEnumStringMap[] = {
      "PHYSICAL",
      "VIRTUAL",
      "NOTDEFINED"
   };

   enum struct IfcPileConstructionEnum {
      CAST_IN_PLACE,
      COMPOSITE,
      PRECAST_CONCRETE,
      PREFAB_STEEL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcPileConstructionEnumStringMap[] = {
      "CAST_IN_PLACE",
      "COMPOSITE",
      "PRECAST_CONCRETE",
      "PREFAB_STEEL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcPileTypeEnum {
      COHESION,
      FRICTION,
      SUPPORT,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcPileTypeEnumStringMap[] = {
      "COHESION",
      "FRICTION",
      "SUPPORT",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcPipeFittingTypeEnum {
      BEND,
      CONNECTOR,
      ENTRY,
      EXIT,
      JUNCTION,
      OBSTRUCTION,
      TRANSITION,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcPipeFittingTypeEnumStringMap[] = {
      "BEND",
      "CONNECTOR",
      "ENTRY",
      "EXIT",
      "JUNCTION",
      "OBSTRUCTION",
      "TRANSITION",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcPipeSegmentTypeEnum {
      FLEXIBLESEGMENT,
      RIGIDSEGMENT,
      GUTTER,
      SPOOL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcPipeSegmentTypeEnumStringMap[] = {
      "FLEXIBLESEGMENT",
      "RIGIDSEGMENT",
      "GUTTER",
      "SPOOL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcPlateTypeEnum {
      CURTAIN_PANEL,
      SHEET,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcPlateTypeEnumStringMap[] = {
      "CURTAIN_PANEL",
      "SHEET",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcProcedureTypeEnum {
      ADVICE_CAUTION,
      ADVICE_NOTE,
      ADVICE_WARNING,
      CALIBRATION,
      DIAGNOSTIC,
      SHUTDOWN,
      STARTUP,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcProcedureTypeEnumStringMap[] = {
      "ADVICE_CAUTION",
      "ADVICE_NOTE",
      "ADVICE_WARNING",
      "CALIBRATION",
      "DIAGNOSTIC",
      "SHUTDOWN",
      "STARTUP",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcProfileTypeEnum {
      CURVE,
      AREA
   };

   const char * IfcProfileTypeEnumStringMap[] = {
      "CURVE",
      "AREA"
   };

   enum struct IfcProjectOrderRecordTypeEnum {
      CHANGE,
      MAINTENANCE,
      MOVE,
      PURCHASE,
      WORK,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcProjectOrderRecordTypeEnumStringMap[] = {
      "CHANGE",
      "MAINTENANCE",
      "MOVE",
      "PURCHASE",
      "WORK",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcProjectOrderTypeEnum {
      CHANGEORDER,
      MAINTENANCEWORKORDER,
      MOVEORDER,
      PURCHASEORDER,
      WORKORDER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcProjectOrderTypeEnumStringMap[] = {
      "CHANGEORDER",
      "MAINTENANCEWORKORDER",
      "MOVEORDER",
      "PURCHASEORDER",
      "WORKORDER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcProjectedOrTrueLengthEnum {
      PROJECTED_LENGTH,
      TRUE_LENGTH
   };

   const char * IfcProjectedOrTrueLengthEnumStringMap[] = {
      "PROJECTED_LENGTH",
      "TRUE_LENGTH"
   };

   enum struct IfcPropertySourceEnum {
      DESIGN,
      DESIGNMAXIMUM,
      DESIGNMINIMUM,
      SIMULATED,
      ASBUILT,
      COMMISSIONING,
      MEASURED,
      USERDEFINED,
      NOTKNOWN
   };

   const char * IfcPropertySourceEnumStringMap[] = {
      "DESIGN",
      "DESIGNMAXIMUM",
      "DESIGNMINIMUM",
      "SIMULATED",
      "ASBUILT",
      "COMMISSIONING",
      "MEASURED",
      "USERDEFINED",
      "NOTKNOWN"
   };

   enum struct IfcProtectiveDeviceTypeEnum {
      FUSEDISCONNECTOR,
      CIRCUITBREAKER,
      EARTHFAILUREDEVICE,
      RESIDUALCURRENTCIRCUITBREAKER,
      RESIDUALCURRENTSWITCH,
      VARISTOR,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcProtectiveDeviceTypeEnumStringMap[] = {
      "FUSEDISCONNECTOR",
      "CIRCUITBREAKER",
      "EARTHFAILUREDEVICE",
      "RESIDUALCURRENTCIRCUITBREAKER",
      "RESIDUALCURRENTSWITCH",
      "VARISTOR",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcPumpTypeEnum {
      CIRCULATOR,
      ENDSUCTION,
      SPLITCASE,
      VERTICALINLINE,
      VERTICALTURBINE,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcPumpTypeEnumStringMap[] = {
      "CIRCULATOR",
      "ENDSUCTION",
      "SPLITCASE",
      "VERTICALINLINE",
      "VERTICALTURBINE",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcRailingTypeEnum {
      HANDRAIL,
      GUARDRAIL,
      BALUSTRADE,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcRailingTypeEnumStringMap[] = {
      "HANDRAIL",
      "GUARDRAIL",
      "BALUSTRADE",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcRampFlightTypeEnum {
      STRAIGHT,
      SPIRAL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcRampFlightTypeEnumStringMap[] = {
      "STRAIGHT",
      "SPIRAL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcRampTypeEnum {
      STRAIGHT_RUN_RAMP,
      TWO_STRAIGHT_RUN_RAMP,
      QUARTER_TURN_RAMP,
      TWO_QUARTER_TURN_RAMP,
      HALF_TURN_RAMP,
      SPIRAL_RAMP,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcRampTypeEnumStringMap[] = {
      "STRAIGHT_RUN_RAMP",
      "TWO_STRAIGHT_RUN_RAMP",
      "QUARTER_TURN_RAMP",
      "TWO_QUARTER_TURN_RAMP",
      "HALF_TURN_RAMP",
      "SPIRAL_RAMP",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcReflectanceMethodEnum {
      BLINN,
      FLAT,
      GLASS,
      MATT,
      METAL,
      MIRROR,
      PHONG,
      PLASTIC,
      STRAUSS,
      NOTDEFINED
   };

   const char * IfcReflectanceMethodEnumStringMap[] = {
      "BLINN",
      "FLAT",
      "GLASS",
      "MATT",
      "METAL",
      "MIRROR",
      "PHONG",
      "PLASTIC",
      "STRAUSS",
      "NOTDEFINED"
   };

   enum struct IfcReinforcingBarRoleEnum {
      MAIN,
      SHEAR,
      LIGATURE,
      STUD,
      PUNCHING,
      EDGE,
      RING,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcReinforcingBarRoleEnumStringMap[] = {
      "MAIN",
      "SHEAR",
      "LIGATURE",
      "STUD",
      "PUNCHING",
      "EDGE",
      "RING",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcReinforcingBarSurfaceEnum {
      PLAIN,
      TEXTURED
   };

   const char * IfcReinforcingBarSurfaceEnumStringMap[] = {
      "PLAIN",
      "TEXTURED"
   };

   enum struct IfcResourceConsumptionEnum {
      CONSUMED,
      PARTIALLYCONSUMED,
      NOTCONSUMED,
      OCCUPIED,
      PARTIALLYOCCUPIED,
      NOTOCCUPIED,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcResourceConsumptionEnumStringMap[] = {
      "CONSUMED",
      "PARTIALLYCONSUMED",
      "NOTCONSUMED",
      "OCCUPIED",
      "PARTIALLYOCCUPIED",
      "NOTOCCUPIED",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcRibPlateDirectionEnum {
      DIRECTION_X,
      DIRECTION_Y
   };

   const char * IfcRibPlateDirectionEnumStringMap[] = {
      "DIRECTION_X",
      "DIRECTION_Y"
   };

   enum struct IfcRoleEnum {
      SUPPLIER,
      MANUFACTURER,
      CONTRACTOR,
      SUBCONTRACTOR,
      ARCHITECT,
      STRUCTURALENGINEER,
      COSTENGINEER,
      CLIENT,
      BUILDINGOWNER,
      BUILDINGOPERATOR,
      MECHANICALENGINEER,
      ELECTRICALENGINEER,
      PROJECTMANAGER,
      FACILITIESMANAGER,
      CIVILENGINEER,
      COMISSIONINGENGINEER,
      ENGINEER,
      OWNER,
      CONSULTANT,
      CONSTRUCTIONMANAGER,
      FIELDCONSTRUCTIONMANAGER,
      RESELLER,
      USERDEFINED
   };

   const char * IfcRoleEnumStringMap[] = {
      "SUPPLIER",
      "MANUFACTURER",
      "CONTRACTOR",
      "SUBCONTRACTOR",
      "ARCHITECT",
      "STRUCTURALENGINEER",
      "COSTENGINEER",
      "CLIENT",
      "BUILDINGOWNER",
      "BUILDINGOPERATOR",
      "MECHANICALENGINEER",
      "ELECTRICALENGINEER",
      "PROJECTMANAGER",
      "FACILITIESMANAGER",
      "CIVILENGINEER",
      "COMISSIONINGENGINEER",
      "ENGINEER",
      "OWNER",
      "CONSULTANT",
      "CONSTRUCTIONMANAGER",
      "FIELDCONSTRUCTIONMANAGER",
      "RESELLER",
      "USERDEFINED"
   };

   enum struct IfcRoofTypeEnum {
      FLAT_ROOF,
      SHED_ROOF,
      GABLE_ROOF,
      HIP_ROOF,
      HIPPED_GABLE_ROOF,
      GAMBREL_ROOF,
      MANSARD_ROOF,
      BARREL_ROOF,
      RAINBOW_ROOF,
      BUTTERFLY_ROOF,
      PAVILION_ROOF,
      DOME_ROOF,
      FREEFORM,
      NOTDEFINED
   };

   const char * IfcRoofTypeEnumStringMap[] = {
      "FLAT_ROOF",
      "SHED_ROOF",
      "GABLE_ROOF",
      "HIP_ROOF",
      "HIPPED_GABLE_ROOF",
      "GAMBREL_ROOF",
      "MANSARD_ROOF",
      "BARREL_ROOF",
      "RAINBOW_ROOF",
      "BUTTERFLY_ROOF",
      "PAVILION_ROOF",
      "DOME_ROOF",
      "FREEFORM",
      "NOTDEFINED"
   };

   enum struct IfcSIPrefix {
      EXA,
      PETA,
      TERA,
      GIGA,
      MEGA,
      KILO,
      HECTO,
      DECA,
      DECI,
      CENTI,
      MILLI,
      MICRO,
      NANO,
      PICO,
      FEMTO,
      ATTO
   };

   const char * IfcSIPrefixStringMap[] = {
      "EXA",
      "PETA",
      "TERA",
      "GIGA",
      "MEGA",
      "KILO",
      "HECTO",
      "DECA",
      "DECI",
      "CENTI",
      "MILLI",
      "MICRO",
      "NANO",
      "PICO",
      "FEMTO",
      "ATTO"
   };

   enum struct IfcSIUnitName {
      AMPERE,
      BECQUEREL,
      CANDELA,
      COULOMB,
      CUBIC_METRE,
      DEGREE_CELSIUS,
      FARAD,
      GRAM,
      GRAY,
      HENRY,
      HERTZ,
      JOULE,
      KELVIN,
      LUMEN,
      LUX,
      METRE,
      MOLE,
      NEWTON,
      OHM,
      PASCAL,
      RADIAN,
      SECOND,
      SIEMENS,
      SIEVERT,
      SQUARE_METRE,
      STERADIAN,
      TESLA,
      VOLT,
      WATT,
      WEBER
   };

   const char * IfcSIUnitNameStringMap[] = {
      "AMPERE",
      "BECQUEREL",
      "CANDELA",
      "COULOMB",
      "CUBIC_METRE",
      "DEGREE_CELSIUS",
      "FARAD",
      "GRAM",
      "GRAY",
      "HENRY",
      "HERTZ",
      "JOULE",
      "KELVIN",
      "LUMEN",
      "LUX",
      "METRE",
      "MOLE",
      "NEWTON",
      "OHM",
      "PASCAL",
      "RADIAN",
      "SECOND",
      "SIEMENS",
      "SIEVERT",
      "SQUARE_METRE",
      "STERADIAN",
      "TESLA",
      "VOLT",
      "WATT",
      "WEBER"
   };

   enum struct IfcSanitaryTerminalTypeEnum {
      BATH,
      BIDET,
      CISTERN,
      SHOWER,
      SINK,
      SANITARYFOUNTAIN,
      TOILETPAN,
      URINAL,
      WASHHANDBASIN,
      WCSEAT,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcSanitaryTerminalTypeEnumStringMap[] = {
      "BATH",
      "BIDET",
      "CISTERN",
      "SHOWER",
      "SINK",
      "SANITARYFOUNTAIN",
      "TOILETPAN",
      "URINAL",
      "WASHHANDBASIN",
      "WCSEAT",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcSectionTypeEnum {
      UNIFORM,
      TAPERED
   };

   const char * IfcSectionTypeEnumStringMap[] = {
      "UNIFORM",
      "TAPERED"
   };

   enum struct IfcSensorTypeEnum {
      CO2SENSOR,
      FIRESENSOR,
      FLOWSENSOR,
      GASSENSOR,
      HEATSENSOR,
      HUMIDITYSENSOR,
      LIGHTSENSOR,
      MOISTURESENSOR,
      MOVEMENTSENSOR,
      PRESSURESENSOR,
      SMOKESENSOR,
      SOUNDSENSOR,
      TEMPERATURESENSOR,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcSensorTypeEnumStringMap[] = {
      "CO2SENSOR",
      "FIRESENSOR",
      "FLOWSENSOR",
      "GASSENSOR",
      "HEATSENSOR",
      "HUMIDITYSENSOR",
      "LIGHTSENSOR",
      "MOISTURESENSOR",
      "MOVEMENTSENSOR",
      "PRESSURESENSOR",
      "SMOKESENSOR",
      "SOUNDSENSOR",
      "TEMPERATURESENSOR",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcSequenceEnum {
      START_START,
      START_FINISH,
      FINISH_START,
      FINISH_FINISH,
      NOTDEFINED
   };

   const char * IfcSequenceEnumStringMap[] = {
      "START_START",
      "START_FINISH",
      "FINISH_START",
      "FINISH_FINISH",
      "NOTDEFINED"
   };

   enum struct IfcServiceLifeFactorTypeEnum {
      A_QUALITYOFCOMPONENTS,
      B_DESIGNLEVEL,
      C_WORKEXECUTIONLEVEL,
      D_INDOORENVIRONMENT,
      E_OUTDOORENVIRONMENT,
      F_INUSECONDITIONS,
      G_MAINTENANCELEVEL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcServiceLifeFactorTypeEnumStringMap[] = {
      "A_QUALITYOFCOMPONENTS",
      "B_DESIGNLEVEL",
      "C_WORKEXECUTIONLEVEL",
      "D_INDOORENVIRONMENT",
      "E_OUTDOORENVIRONMENT",
      "F_INUSECONDITIONS",
      "G_MAINTENANCELEVEL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcServiceLifeTypeEnum {
      ACTUALSERVICELIFE,
      EXPECTEDSERVICELIFE,
      OPTIMISTICREFERENCESERVICELIFE,
      PESSIMISTICREFERENCESERVICELIFE,
      REFERENCESERVICELIFE
   };

   const char * IfcServiceLifeTypeEnumStringMap[] = {
      "ACTUALSERVICELIFE",
      "EXPECTEDSERVICELIFE",
      "OPTIMISTICREFERENCESERVICELIFE",
      "PESSIMISTICREFERENCESERVICELIFE",
      "REFERENCESERVICELIFE"
   };

   enum struct IfcSlabTypeEnum {
      FLOOR,
      ROOF,
      LANDING,
      BASESLAB,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcSlabTypeEnumStringMap[] = {
      "FLOOR",
      "ROOF",
      "LANDING",
      "BASESLAB",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcSoundScaleEnum {
      DBA,
      DBB,
      DBC,
      NC,
      NR,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcSoundScaleEnumStringMap[] = {
      "DBA",
      "DBB",
      "DBC",
      "NC",
      "NR",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcSpaceHeaterTypeEnum {
      SECTIONALRADIATOR,
      PANELRADIATOR,
      TUBULARRADIATOR,
      CONVECTOR,
      BASEBOARDHEATER,
      FINNEDTUBEUNIT,
      UNITHEATER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcSpaceHeaterTypeEnumStringMap[] = {
      "SECTIONALRADIATOR",
      "PANELRADIATOR",
      "TUBULARRADIATOR",
      "CONVECTOR",
      "BASEBOARDHEATER",
      "FINNEDTUBEUNIT",
      "UNITHEATER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcSpaceTypeEnum {
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcSpaceTypeEnumStringMap[] = {
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcStackTerminalTypeEnum {
      BIRDCAGE,
      COWL,
      RAINWATERHOPPER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcStackTerminalTypeEnumStringMap[] = {
      "BIRDCAGE",
      "COWL",
      "RAINWATERHOPPER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcStairFlightTypeEnum {
      STRAIGHT,
      WINDER,
      SPIRAL,
      CURVED,
      FREEFORM,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcStairFlightTypeEnumStringMap[] = {
      "STRAIGHT",
      "WINDER",
      "SPIRAL",
      "CURVED",
      "FREEFORM",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcStairTypeEnum {
      STRAIGHT_RUN_STAIR,
      TWO_STRAIGHT_RUN_STAIR,
      QUARTER_WINDING_STAIR,
      QUARTER_TURN_STAIR,
      HALF_WINDING_STAIR,
      HALF_TURN_STAIR,
      TWO_QUARTER_WINDING_STAIR,
      TWO_QUARTER_TURN_STAIR,
      THREE_QUARTER_WINDING_STAIR,
      THREE_QUARTER_TURN_STAIR,
      SPIRAL_STAIR,
      DOUBLE_RETURN_STAIR,
      CURVED_RUN_STAIR,
      TWO_CURVED_RUN_STAIR,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcStairTypeEnumStringMap[] = {
      "STRAIGHT_RUN_STAIR",
      "TWO_STRAIGHT_RUN_STAIR",
      "QUARTER_WINDING_STAIR",
      "QUARTER_TURN_STAIR",
      "HALF_WINDING_STAIR",
      "HALF_TURN_STAIR",
      "TWO_QUARTER_WINDING_STAIR",
      "TWO_QUARTER_TURN_STAIR",
      "THREE_QUARTER_WINDING_STAIR",
      "THREE_QUARTER_TURN_STAIR",
      "SPIRAL_STAIR",
      "DOUBLE_RETURN_STAIR",
      "CURVED_RUN_STAIR",
      "TWO_CURVED_RUN_STAIR",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcStateEnum {
      READWRITE,
      READONLY,
      LOCKED,
      READWRITELOCKED,
      READONLYLOCKED
   };

   const char * IfcStateEnumStringMap[] = {
      "READWRITE",
      "READONLY",
      "LOCKED",
      "READWRITELOCKED",
      "READONLYLOCKED"
   };

   enum struct IfcStructuralCurveTypeEnum {
      RIGID_JOINED_MEMBER,
      PIN_JOINED_MEMBER,
      CABLE,
      TENSION_MEMBER,
      COMPRESSION_MEMBER,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcStructuralCurveTypeEnumStringMap[] = {
      "RIGID_JOINED_MEMBER",
      "PIN_JOINED_MEMBER",
      "CABLE",
      "TENSION_MEMBER",
      "COMPRESSION_MEMBER",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcStructuralSurfaceTypeEnum {
      BENDING_ELEMENT,
      MEMBRANE_ELEMENT,
      SHELL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcStructuralSurfaceTypeEnumStringMap[] = {
      "BENDING_ELEMENT",
      "MEMBRANE_ELEMENT",
      "SHELL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcSurfaceSide {
      POSITIVE,
      NEGATIVE,
      BOTH
   };

   const char * IfcSurfaceSideStringMap[] = {
      "POSITIVE",
      "NEGATIVE",
      "BOTH"
   };

   enum struct IfcSurfaceTextureEnum {
      BUMP,
      OPACITY,
      REFLECTION,
      SELFILLUMINATION,
      SHININESS,
      SPECULAR,
      TEXTURE,
      TRANSPARENCYMAP,
      NOTDEFINED
   };

   const char * IfcSurfaceTextureEnumStringMap[] = {
      "BUMP",
      "OPACITY",
      "REFLECTION",
      "SELFILLUMINATION",
      "SHININESS",
      "SPECULAR",
      "TEXTURE",
      "TRANSPARENCYMAP",
      "NOTDEFINED"
   };

   enum struct IfcSwitchingDeviceTypeEnum {
      CONTACTOR,
      EMERGENCYSTOP,
      STARTER,
      SWITCHDISCONNECTOR,
      TOGGLESWITCH,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcSwitchingDeviceTypeEnumStringMap[] = {
      "CONTACTOR",
      "EMERGENCYSTOP",
      "STARTER",
      "SWITCHDISCONNECTOR",
      "TOGGLESWITCH",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcTankTypeEnum {
      PREFORMED,
      SECTIONAL,
      EXPANSION,
      PRESSUREVESSEL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcTankTypeEnumStringMap[] = {
      "PREFORMED",
      "SECTIONAL",
      "EXPANSION",
      "PRESSUREVESSEL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcTendonTypeEnum {
      STRAND,
      WIRE,
      BAR,
      COATED,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcTendonTypeEnumStringMap[] = {
      "STRAND",
      "WIRE",
      "BAR",
      "COATED",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcTextPath {
      LEFT,
      RIGHT,
      UP,
      DOWN
   };

   const char * IfcTextPathStringMap[] = {
      "LEFT",
      "RIGHT",
      "UP",
      "DOWN"
   };

   enum struct IfcThermalLoadSourceEnum {
      PEOPLE,
      LIGHTING,
      EQUIPMENT,
      VENTILATIONINDOORAIR,
      VENTILATIONOUTSIDEAIR,
      RECIRCULATEDAIR,
      EXHAUSTAIR,
      AIREXCHANGERATE,
      DRYBULBTEMPERATURE,
      RELATIVEHUMIDITY,
      INFILTRATION,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcThermalLoadSourceEnumStringMap[] = {
      "PEOPLE",
      "LIGHTING",
      "EQUIPMENT",
      "VENTILATIONINDOORAIR",
      "VENTILATIONOUTSIDEAIR",
      "RECIRCULATEDAIR",
      "EXHAUSTAIR",
      "AIREXCHANGERATE",
      "DRYBULBTEMPERATURE",
      "RELATIVEHUMIDITY",
      "INFILTRATION",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcThermalLoadTypeEnum {
      SENSIBLE,
      LATENT,
      RADIANT,
      NOTDEFINED
   };

   const char * IfcThermalLoadTypeEnumStringMap[] = {
      "SENSIBLE",
      "LATENT",
      "RADIANT",
      "NOTDEFINED"
   };

   enum struct IfcTimeSeriesDataTypeEnum {
      CONTINUOUS,
      DISCRETE,
      DISCRETEBINARY,
      PIECEWISEBINARY,
      PIECEWISECONSTANT,
      PIECEWISECONTINUOUS,
      NOTDEFINED
   };

   const char * IfcTimeSeriesDataTypeEnumStringMap[] = {
      "CONTINUOUS",
      "DISCRETE",
      "DISCRETEBINARY",
      "PIECEWISEBINARY",
      "PIECEWISECONSTANT",
      "PIECEWISECONTINUOUS",
      "NOTDEFINED"
   };

   enum struct IfcTimeSeriesScheduleTypeEnum {
      ANNUAL,
      MONTHLY,
      WEEKLY,
      DAILY,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcTimeSeriesScheduleTypeEnumStringMap[] = {
      "ANNUAL",
      "MONTHLY",
      "WEEKLY",
      "DAILY",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcTransformerTypeEnum {
      CURRENT,
      FREQUENCY,
      VOLTAGE,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcTransformerTypeEnumStringMap[] = {
      "CURRENT",
      "FREQUENCY",
      "VOLTAGE",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcTransitionCode {
      DISCONTINUOUS,
      CONTINUOUS,
      CONTSAMEGRADIENT,
      CONTSAMEGRADIENTSAMECURVATURE
   };

   const char * IfcTransitionCodeStringMap[] = {
      "DISCONTINUOUS",
      "CONTINUOUS",
      "CONTSAMEGRADIENT",
      "CONTSAMEGRADIENTSAMECURVATURE"
   };

   enum struct IfcTransportElementTypeEnum {
      ELEVATOR,
      ESCALATOR,
      MOVINGWALKWAY,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcTransportElementTypeEnumStringMap[] = {
      "ELEVATOR",
      "ESCALATOR",
      "MOVINGWALKWAY",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcTrimmingPreference {
      CARTESIAN,
      PARAMETER,
      UNSPECIFIED
   };

   const char * IfcTrimmingPreferenceStringMap[] = {
      "CARTESIAN",
      "PARAMETER",
      "UNSPECIFIED"
   };

   enum struct IfcTubeBundleTypeEnum {
      FINNED,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcTubeBundleTypeEnumStringMap[] = {
      "FINNED",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcUnitEnum {
      ABSORBEDDOSEUNIT,
      AMOUNTOFSUBSTANCEUNIT,
      AREAUNIT,
      DOSEEQUIVALENTUNIT,
      ELECTRICCAPACITANCEUNIT,
      ELECTRICCHARGEUNIT,
      ELECTRICCONDUCTANCEUNIT,
      ELECTRICCURRENTUNIT,
      ELECTRICRESISTANCEUNIT,
      ELECTRICVOLTAGEUNIT,
      ENERGYUNIT,
      FORCEUNIT,
      FREQUENCYUNIT,
      ILLUMINANCEUNIT,
      INDUCTANCEUNIT,
      LENGTHUNIT,
      LUMINOUSFLUXUNIT,
      LUMINOUSINTENSITYUNIT,
      MAGNETICFLUXDENSITYUNIT,
      MAGNETICFLUXUNIT,
      MASSUNIT,
      PLANEANGLEUNIT,
      POWERUNIT,
      PRESSUREUNIT,
      RADIOACTIVITYUNIT,
      SOLIDANGLEUNIT,
      THERMODYNAMICTEMPERATUREUNIT,
      TIMEUNIT,
      VOLUMEUNIT,
      USERDEFINED
   };

   const char * IfcUnitEnumStringMap[] = {
      "ABSORBEDDOSEUNIT",
      "AMOUNTOFSUBSTANCEUNIT",
      "AREAUNIT",
      "DOSEEQUIVALENTUNIT",
      "ELECTRICCAPACITANCEUNIT",
      "ELECTRICCHARGEUNIT",
      "ELECTRICCONDUCTANCEUNIT",
      "ELECTRICCURRENTUNIT",
      "ELECTRICRESISTANCEUNIT",
      "ELECTRICVOLTAGEUNIT",
      "ENERGYUNIT",
      "FORCEUNIT",
      "FREQUENCYUNIT",
      "ILLUMINANCEUNIT",
      "INDUCTANCEUNIT",
      "LENGTHUNIT",
      "LUMINOUSFLUXUNIT",
      "LUMINOUSINTENSITYUNIT",
      "MAGNETICFLUXDENSITYUNIT",
      "MAGNETICFLUXUNIT",
      "MASSUNIT",
      "PLANEANGLEUNIT",
      "POWERUNIT",
      "PRESSUREUNIT",
      "RADIOACTIVITYUNIT",
      "SOLIDANGLEUNIT",
      "THERMODYNAMICTEMPERATUREUNIT",
      "TIMEUNIT",
      "VOLUMEUNIT",
      "USERDEFINED"
   };

   enum struct IfcUnitaryEquipmentTypeEnum {
      AIRHANDLER,
      AIRCONDITIONINGUNIT,
      SPLITSYSTEM,
      ROOFTOPUNIT,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcUnitaryEquipmentTypeEnumStringMap[] = {
      "AIRHANDLER",
      "AIRCONDITIONINGUNIT",
      "SPLITSYSTEM",
      "ROOFTOPUNIT",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcValveTypeEnum {
      AIRRELEASE,
      ANTIVACUUM,
      CHANGEOVER,
      CHECK,
      COMMISSIONING,
      DIVERTING,
      DRAWOFFCOCK,
      DOUBLECHECK,
      DOUBLEREGULATING,
      FAUCET,
      FLUSHING,
      GASCOCK,
      GASTAP,
      ISOLATING,
      MIXING,
      PRESSUREREDUCING,
      PRESSURERELIEF,
      REGULATING,
      SAFETYCUTOFF,
      STEAMTRAP,
      STOPCOCK,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcValveTypeEnumStringMap[] = {
      "AIRRELEASE",
      "ANTIVACUUM",
      "CHANGEOVER",
      "CHECK",
      "COMMISSIONING",
      "DIVERTING",
      "DRAWOFFCOCK",
      "DOUBLECHECK",
      "DOUBLEREGULATING",
      "FAUCET",
      "FLUSHING",
      "GASCOCK",
      "GASTAP",
      "ISOLATING",
      "MIXING",
      "PRESSUREREDUCING",
      "PRESSURERELIEF",
      "REGULATING",
      "SAFETYCUTOFF",
      "STEAMTRAP",
      "STOPCOCK",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcVibrationIsolatorTypeEnum {
      COMPRESSION,
      SPRING,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcVibrationIsolatorTypeEnumStringMap[] = {
      "COMPRESSION",
      "SPRING",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcWallTypeEnum {
      STANDARD,
      POLYGONAL,
      SHEAR,
      ELEMENTEDWALL,
      PLUMBINGWALL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcWallTypeEnumStringMap[] = {
      "STANDARD",
      "POLYGONAL",
      "SHEAR",
      "ELEMENTEDWALL",
      "PLUMBINGWALL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcWasteTerminalTypeEnum {
      FLOORTRAP,
      FLOORWASTE,
      GULLYSUMP,
      GULLYTRAP,
      GREASEINTERCEPTOR,
      OILINTERCEPTOR,
      PETROLINTERCEPTOR,
      ROOFDRAIN,
      WASTEDISPOSALUNIT,
      WASTETRAP,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcWasteTerminalTypeEnumStringMap[] = {
      "FLOORTRAP",
      "FLOORWASTE",
      "GULLYSUMP",
      "GULLYTRAP",
      "GREASEINTERCEPTOR",
      "OILINTERCEPTOR",
      "PETROLINTERCEPTOR",
      "ROOFDRAIN",
      "WASTEDISPOSALUNIT",
      "WASTETRAP",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcWindowPanelOperationEnum {
      SIDEHUNGRIGHTHAND,
      SIDEHUNGLEFTHAND,
      TILTANDTURNRIGHTHAND,
      TILTANDTURNLEFTHAND,
      TOPHUNG,
      BOTTOMHUNG,
      PIVOTHORIZONTAL,
      PIVOTVERTICAL,
      SLIDINGHORIZONTAL,
      SLIDINGVERTICAL,
      REMOVABLECASEMENT,
      FIXEDCASEMENT,
      OTHEROPERATION,
      NOTDEFINED
   };

   const char * IfcWindowPanelOperationEnumStringMap[] = {
      "SIDEHUNGRIGHTHAND",
      "SIDEHUNGLEFTHAND",
      "TILTANDTURNRIGHTHAND",
      "TILTANDTURNLEFTHAND",
      "TOPHUNG",
      "BOTTOMHUNG",
      "PIVOTHORIZONTAL",
      "PIVOTVERTICAL",
      "SLIDINGHORIZONTAL",
      "SLIDINGVERTICAL",
      "REMOVABLECASEMENT",
      "FIXEDCASEMENT",
      "OTHEROPERATION",
      "NOTDEFINED"
   };

   enum struct IfcWindowPanelPositionEnum {
      LEFT,
      MIDDLE,
      RIGHT,
      BOTTOM,
      TOP,
      NOTDEFINED
   };

   const char * IfcWindowPanelPositionEnumStringMap[] = {
      "LEFT",
      "MIDDLE",
      "RIGHT",
      "BOTTOM",
      "TOP",
      "NOTDEFINED"
   };

   enum struct IfcWindowStyleConstructionEnum {
      ALUMINIUM,
      HIGH_GRADE_STEEL,
      STEEL,
      WOOD,
      ALUMINIUM_WOOD,
      PLASTIC,
      OTHER_CONSTRUCTION,
      NOTDEFINED
   };

   const char * IfcWindowStyleConstructionEnumStringMap[] = {
      "ALUMINIUM",
      "HIGH_GRADE_STEEL",
      "STEEL",
      "WOOD",
      "ALUMINIUM_WOOD",
      "PLASTIC",
      "OTHER_CONSTRUCTION",
      "NOTDEFINED"
   };

   enum struct IfcWindowStyleOperationEnum {
      SINGLE_PANEL,
      DOUBLE_PANEL_VERTICAL,
      DOUBLE_PANEL_HORIZONTAL,
      TRIPLE_PANEL_VERTICAL,
      TRIPLE_PANEL_BOTTOM,
      TRIPLE_PANEL_TOP,
      TRIPLE_PANEL_LEFT,
      TRIPLE_PANEL_RIGHT,
      TRIPLE_PANEL_HORIZONTAL,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcWindowStyleOperationEnumStringMap[] = {
      "SINGLE_PANEL",
      "DOUBLE_PANEL_VERTICAL",
      "DOUBLE_PANEL_HORIZONTAL",
      "TRIPLE_PANEL_VERTICAL",
      "TRIPLE_PANEL_BOTTOM",
      "TRIPLE_PANEL_TOP",
      "TRIPLE_PANEL_LEFT",
      "TRIPLE_PANEL_RIGHT",
      "TRIPLE_PANEL_HORIZONTAL",
      "USERDEFINED",
      "NOTDEFINED"
   };

   enum struct IfcWorkControlTypeEnum {
      ACTUAL,
      BASELINE,
      PLANNED,
      USERDEFINED,
      NOTDEFINED
   };

   const char * IfcWorkControlTypeEnumStringMap[] = {
      "ACTUAL",
      "BASELINE",
      "PLANNED",
      "USERDEFINED",
      "NOTDEFINED"
   };
}
#endif