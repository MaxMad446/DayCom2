package main

// Auto-generated | 2026-05-12T06:21:40.461237
import "fmt"

func Process_658() int {
    base := 80
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_658())
}
