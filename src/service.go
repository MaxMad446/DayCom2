package main

// Auto-generated | 2026-05-14T06:24:29.108062
import "fmt"

func Process_803() int {
    base := 198
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
