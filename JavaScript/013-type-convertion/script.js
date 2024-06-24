function cast( value, type ){
    let casted_value;
    console.log(`[Received] ${value} : ${typeof value}`);

    switch( type ){
        case "toString":
            casted_value = String( value );
            break;
        case "toNumber":
            casted_value = Number( value );
            break;
        case "toBool":
            casted_value = Boolean( value );
            break;
        default:
            console.log("That convertion is not possible!");
            break;
    }

    console.log(`[Casted] ${casted_value} : ${typeof casted_value}`)
}

cast(100, "toString");
cast("111", "toNumber");
cast("Any value will return true!", "toBool");