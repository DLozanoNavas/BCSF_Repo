﻿// <auto-generated />
//
// To parse this JSON data, add NuGet 'Newtonsoft.Json' then do:
//
//    using Cliente.Modelos;
//
//    var clima = Clima.FromJson(jsonString);

namespace Cliente.Modelos
{
    using System;
    using System.Collections.Generic;

    using System.Globalization;
    using Newtonsoft.Json;
    using Newtonsoft.Json.Converters;

    public partial class Clima
    {
        [JsonProperty("date")]
        public DateTimeOffset Date { get; set; }

        [JsonProperty("temperatureC")]
        public long TemperatureC { get; set; }

        [JsonProperty("temperatureF")]
        public long TemperatureF { get; set; }

        [JsonProperty("summary")]
        public string Summary { get; set; }
    }

    public partial class Clima
    {
        public static List<Clima> FromJson(string json) => JsonConvert.DeserializeObject<List<Clima>>(json, Cliente.Modelos.Converter.Settings);
    }

    public static class Serialize
    {
        public static string ToJson(this List<Clima> self) => JsonConvert.SerializeObject(self, Cliente.Modelos.Converter.Settings);
    }

    internal static class Converter
    {
        public static readonly JsonSerializerSettings Settings = new JsonSerializerSettings
        {
            MetadataPropertyHandling = MetadataPropertyHandling.Ignore,
            DateParseHandling = DateParseHandling.None,
            Converters =
            {
                new IsoDateTimeConverter { DateTimeStyles = DateTimeStyles.AssumeUniversal }
            },
        };
    }
}