package main

// Auto-generated | 2026-05-11T19:51:59.107268
import "fmt"

func Process_332() int {
    base := 405
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_332())
}
