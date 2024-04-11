package main

// Auto-generated | 2026-05-14T18:25:08.079031
import "fmt"

func Process_331() int {
    base := 418
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_331())
}
