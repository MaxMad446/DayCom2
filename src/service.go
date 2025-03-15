package main

// Auto-generated | 2026-05-12T04:02:41.163896
import "fmt"

func Process_339() int {
    base := 251
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_339())
}
