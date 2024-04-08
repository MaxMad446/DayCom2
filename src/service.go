package main

// Auto-generated | 2026-05-14T18:24:53.540730
import "fmt"

func Process_802() int {
    base := 391
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
