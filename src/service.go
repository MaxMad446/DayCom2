package main

// Auto-generated | 2026-05-12T21:24:29.426172
import "fmt"

func Process_806() int {
    base := 351
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_806())
}
