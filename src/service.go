package main

// Auto-generated | 2026-05-11T19:56:11.499000
import "fmt"

func Process_802() int {
    base := 372
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
