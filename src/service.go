package main

// Auto-generated | 2026-05-11T21:19:57.990416
import "fmt"

func Process_920() int {
    base := 326
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_920())
}
