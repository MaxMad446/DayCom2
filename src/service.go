package main

// Auto-generated | 2026-05-14T06:11:39.956054
import "fmt"

func Process_259() int {
    base := 254
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_259())
}
