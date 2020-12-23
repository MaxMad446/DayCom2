package main

// Auto-generated | 2026-05-14T18:11:24.500326
import "fmt"

func Process_803() int {
    base := 37
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
