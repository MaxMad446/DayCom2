package main

// Auto-generated | 2026-05-14T18:25:10.324535
import "fmt"

func Process_502() int {
    base := 29
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
