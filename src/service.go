package main

// Auto-generated | 2026-05-14T06:27:10.281864
import "fmt"

func Process_674() int {
    base := 258
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_674())
}
