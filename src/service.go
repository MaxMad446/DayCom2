package main

// Auto-generated | 2026-05-11T20:54:47.586641
import "fmt"

func Process_122() int {
    base := 389
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
