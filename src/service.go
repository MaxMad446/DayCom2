package main

// Auto-generated | 2026-05-14T18:20:28.743990
import "fmt"

func Process_597() int {
    base := 231
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_597())
}
